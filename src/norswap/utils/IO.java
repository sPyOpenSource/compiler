package norswap.utils;

import norswap.utils.data.wrappers.Pair;
import norswap.utils.exceptions.Exceptions;
import norswap.utils.exceptions.NoStackException;
import norswap.utils.exceptions.ThrowingConsumer;
import java.io.BufferedWriter;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.NoSuchElementException;
import java.util.Scanner;
import java.util.function.Supplier;

import static norswap.utils.exceptions.Exceptions.suppress;

/**
 * Input/Output related utilities.
 */
public final class IO
{
    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a string with the file contents, or null if the file could not be read.
     */
    public static String slurp (String file)
    {
        try {
            return new String(Files.readAllBytes(Paths.get(file)));
        }
        catch (IOException e) {
            return null;
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} with specified input, output and error standard streams and returns
     * the result. If {@code in}, {@code out} or {@code err} is null, the corresponding input
     * stream remains unchanged.
     *
     * <p>This is not thread-safe and should not be used if multiple threads can use these streams
     * concurrently.
     */
    public static <T> T withStandardIO
            (InputStream in, PrintStream out, PrintStream err, Supplier<T> f)
    {
        InputStream oldIn = System.in;
        PrintStream oldOut = System.out;
        PrintStream oldErr = System.err;

        try {
            if (out != null) System.setOut(out);
            if (err != null) System.setErr(err);
            if (in != null)  System.setIn(in);
            return f.get();
        } finally {
            System.out.flush();
            System.err.flush();
            if (out != null) System.setOut(oldOut);
            if (err != null) System.setErr(oldErr);
            if (in != null)  System.setIn(oldIn);
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} with the specified stream as standard output stream and return the result.
     *
     * <p>This is not thread-safe and should not be used if multiple threads can use stdout
     * concurrently.
     */
    public static <T> T withStdout (PrintStream out, Supplier<T> f) {
        return withStandardIO(null, out, null, f);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} with the specified stream as standard error stream and return the result.
     *
     * <p>This is not thread-safe and should not be used if multiple threads can use stderr
     * concurrently.
     */
    public static <T> T withStderr (PrintStream err, Supplier<T> f) {
        return withStandardIO(null, null, err, f);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} with the specified stream as standard input stream and return the result.
     *
     * <p>This is not thread-safe and should not be used if multiple threads can use stdin
     * concurrently.
     */
    public static <T> T withStdin (InputStream in, Supplier<T> f) {
        return withStandardIO(in, null, null, f);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} while capturing the standard output stream.
     *
     * <p>This is not thread-safe and should not be used if multiple threads can use stdout
     * concurrently.
     */
    public static <T> Pair<String, T> captureStdout (Supplier<T> f)
    {
        Pair<String, T> result = null;
        try (ByteArrayOutputStream baos = new ByteArrayOutputStream();
             PrintStream ps = new PrintStream(baos))
        {
            T value = withStdout(ps, f);
            String string = baos.toString();
            // replace windows line endings
            if (OperatingSystem.OS == OperatingSystem.WINDOWS) string = string.replace("\r\n", "\n");
            result = new Pair<>(string, value);
        } catch (IOException e) {
            // close() exception, ignore, result will be set
        }
        return  result;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f} while capturing the standard error stream.
     *
     * <p>This is not thread-safe and should not be used if multiple threads can use stderr
     * concurrently.
     */
    public static <T> Pair<String, T> captureStderr (Supplier<T> f)
    {
        Pair<String, T> result = null;
        try (ByteArrayOutputStream baos = new ByteArrayOutputStream();
             PrintStream ps = new PrintStream(baos))
        {
             T value = withStderr(ps, f);
             result = new Pair<>(baos.toString(), value);
        } catch (IOException e) {
            // close() exception, ignore, result will be set
        }
        return  result;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Runs {@code f}, using {@code input} as the standard input stream.
     *
     * <p>This is not thread-safe and should not be used if multiple threads can use stdin
     * concurrently.
     */
    public static <T> T withInput (String input, Supplier<T> f)
    {
        T result = null;
        try (InputStream in =  new ByteArrayInputStream(input.getBytes())) {
            result = withStdin(in, f);
        } catch (IOException e) {
            // close() exception, ignore, result will be set
        }
        return result;
    }

    // ---------------------------------------------------------------------------------------------

    // NOTE: To make all of this thread-safe, it would suffice to set stdout, stderr and stdin to
    // custom stream classes that delegate (all their methods) to inheritable thread-local streams.
    // Then, we can just change the thread-local temporarily.

    // ---------------------------------------------------------------------------------------------

    /**
     * Wait until the user enters a line on stdin, then run the passed task (if null, simply
     * waits).
     *
     * @see Concurrency#waitForever()
     */
    public static void waitForInput (Runnable task)
    {
        Scanner scanner = new Scanner(System.in);
        try {
            System.out.println("Press ENTER to continue.");
            String line = scanner.nextLine();
        } catch (IllegalStateException | NoSuchElementException e) {
            // stdin was closed
        } finally {
            if (task != null) task.run();
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Executes the given action with a file writer for the given file. Ensures that the writer
     * is closed when the action completes (normally or with an exception).
     *
     * <p>Thrown checked exceptions will be wrapped in a {@link NoStackException}.
     *
     * <p>If {@code append} is true, the file will be appended to instead of being truncated.
     */
    public static void withFileWriter (String file, boolean append, ThrowingConsumer<BufferedWriter> action)
    {
        // The buffered writer will also close the file writer.
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(file, append))) {
            action.accept(writer);
        } catch (Throwable t) {
            Exceptions.rethrow(t);
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Same as {@link #withFileWriter(String, boolean, ThrowingConsumer)}, but always truncates the
     * written file.
     */
    public static void withFileWriter (String file, ThrowingConsumer<BufferedWriter> action) {
        withFileWriter(file, false, action);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Same as {@link #withFileWriter(String, boolean, ThrowingConsumer)}, but accepts a {@link Path}.
     */
    public static void withFileWriter (Path path, boolean append, ThrowingConsumer<BufferedWriter> action) {
        withFileWriter(path.toString(), append, action);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Same as {@link #withFileWriter(String, boolean, ThrowingConsumer)}, but accepts a {@link
     * Path} and always truncates the written file.
     */
    public static void withFileWriter (Path path, ThrowingConsumer<BufferedWriter> action) {
        withFileWriter(path.toString(), false, action);
    }

    // ---------------------------------------------------------------------------------------------
}

