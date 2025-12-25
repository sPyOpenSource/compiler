package norswap.utils;

import norswap.utils.exceptions.Exceptional;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

import static norswap.utils.exceptions.Exceptions.suppress;

/**
 * Utility functions dealing with concurrency and asynchronicity (futures etc).
 */
public final class Concurrency {
    private Concurrency () {}

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an exceptional that contains the value of the completable future, if it completes
     * within the given timeout deadline (in milliseconds), or the resulting timeout exception.
     */
    public static <T> Exceptional<T> await (CompletableFuture<T> future, long timeoutInMillis)
    {
        long time = System.currentTimeMillis();
        long deadline = time + timeoutInMillis;
        while (true) try {
            return Exceptional.value(future.get(deadline - time, TimeUnit.MILLISECONDS));
        } catch (TimeoutException e) {
            return Exceptional.exception(e);
        } catch (InterruptedException | ExecutionException e) {
            time = System.currentTimeMillis();
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Causes the current thread to wait forever (and thus never terminate unless forcibly
     * terminated).
     *
     * @see IO#waitForInput(Runnable)
     */
    @SuppressWarnings("InfiniteLoopStatement")
    public static void waitForever() {
        while (true)
            suppress(() -> Thread.currentThread().join());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Attempt to sleep for the requested number of milliseconds, but can be interrupted before.
     * Does not throw an exception if interrupted.
     */
    public static void sleepLax (long milliseconds) {
        try {
            Thread.sleep(milliseconds);
        } catch (InterruptedException e) {
            // interrupted
        }
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Sleep for the requested number of milliseconds.
     */
    @SuppressWarnings("BusyWait")
    public static void sleep (long milliseconds) {
        long start = System.currentTimeMillis();
        while (true)
            try {
                long elapsed = System.currentTimeMillis() - start;
                if (elapsed > milliseconds) return;
                Thread.sleep(milliseconds - elapsed);
            } catch (InterruptedException e) {
                // interrupted
            }
    }

    // ---------------------------------------------------------------------------------------------
}
