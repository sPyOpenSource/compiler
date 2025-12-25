package norswap.utils;

import java.io.IOException;
import java.nio.file.DirectoryStream;
import java.nio.file.FileSystem;
import java.nio.file.FileSystems;
import java.nio.file.FileVisitResult;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.PathMatcher;
import java.nio.file.SimpleFileVisitor;
import java.nio.file.attribute.BasicFileAttributes;
import java.util.ArrayList;
import java.util.List;

/**
 * Utilities to deal with the file system.
 */
public final class NFiles
{
    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a list of all the paths that match the given glob pattern within the given directory.
     *
     * <p>The pattern syntax is described in the doc of {@link FileSystem#getPathMatcher(String)} —
     * the "glob:" part should be omitted.
     */
    public static List<Path> glob (String pattern, Path directory) throws IOException
    {
        PathMatcher matcher = FileSystems.getDefault().getPathMatcher("glob:" + pattern);
        List<Path> result = new ArrayList<>();

        Files.walkFileTree (directory, new SimpleFileVisitor<Path>()
        {
            @Override public FileVisitResult visitFile (Path file, BasicFileAttributes attrs)
            {
                if (matcher.matches(file)) result.add(file);
                return FileVisitResult.CONTINUE;
            }

            @Override public FileVisitResult visitFileFailed (Path file, IOException exc) {
                return FileVisitResult.CONTINUE;
            }
        });

        return result;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns true iff the path denotes a file whose name starts with a dot.
     *
     * <p>A reference to this method can be passed to {@link Files#newDirectoryStream(Path,
     * DirectoryStream.Filter)} to ignore dotfiles in a directory.
     */
    public static boolean noDotfiles (Path path) {
        return !path.getFileName().startsWith(".");
    }

    // ---------------------------------------------------------------------------------------------
}
