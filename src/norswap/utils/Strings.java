package norswap.utils;

import java.util.ArrayList;
import java.util.NoSuchElementException;

/**
 * Utility functions dealing with strings and string builders.
 */
public final class Strings
{
    // ---------------------------------------------------------------------------------------------

    /**
     * Normalizes {@code index} relatively to {@code string}: if it is negative, it is
     * turned into a positive index, such that -1 designates the last item of the string.
     * @throws ArrayIndexOutOfBoundsException if the index is out of bounds
     */
    public static int index (String string, int index)
    {
        if (index < -string.length() || index >= string.length())
            throw new ArrayIndexOutOfBoundsException(
                    String.format("index(%d) with size %d", index, string.length()));

        return index >= 0
                ? index
                : string.length() + index;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Juste like {@link String#subSequence(int, int)} but the first index may be negative (where -1
     * is the index of the last character), and the second index is implicitly the end of the
     * string.
     */
    public static CharSequence subSequence (String string, int start) {
        return string.subSequence(index(string, start), string.length());
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Juste like {@link String#substring(int)} but the index may be negative, where -1 is the index
     * of the last character.
     */
    public static String substring (String string, int start) {
        return string.substring(index(string, start));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Juste like {@link String#subSequence(int, int)} but the indices may be negative, where -1 is
     * the index of the last character.
     */
    public static CharSequence subSequence (String string, int start, int end) {
        return string.subSequence(index(string, start), index(string, end));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Juste like {@link String#substring(int)} (int, int)} but the indices may be negative, using
     * {@link #index(String, int)}.
     */
    public static CharSequence substring (String string, int start, int end) {
        return string.substring(index(string, start), index(string, end));
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns the last character of the string, or throws an exception if the string is empty.
     */
    public static char lastChar (String string)
    {
        if (string.isEmpty())
            throw new IllegalArgumentException("empty string");
        return string.charAt(string.length() - 1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a string that repeats the character {@code c}, {@code n} times.
     */
    public static String repeat (char c, int n)
    {
        char[] chars = new char[n];
        for (int i = 0; i < n; ++i) chars[i] = c;
        return new String(chars);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a string that repeats the string {@code str}, {@code n} times.
     *
     * <p>In Java 11+, there is {@code String#repeat(int)} for this instead.
     */
    public static String repeat (String str, int n) {
        return new String(new char[n]).replace("\0", str);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns an array of strings representing the individual lines in {@code string}. Each newline
     * character, as well as the end of the string, cause a new (possibly empty) line to be created.
     * The newlines characters are stripped from the lines.
     */
    public static String[] lines (String string)
    {
        ArrayList<String> lines = new ArrayList<>();
        int start = 0;
        for (int i = 0; i < string.length(); ++i) {
            if (string.charAt(i) == '\n') {
                lines.add(string.substring(start, i));
                start = i + 1;
            }
        }
        lines.add(string.substring(start));
        return lines.toArray(new String[0]);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Prepend {@code prefix} to the start of each line of {@code string}. The lines should be
     * understood in the sense of {@link #lines(String)}, so if {@code string} ends with a newline,
     * the returned string will end with the prefix.
     */
    public static String indent (String string, String prefix)
    {
        String[] lines = lines(string);
        StringBuilder b = new StringBuilder();
        for (String line: lines)
            append(b, prefix, line, "\n");
        pop(b, 1); // last newline
        return b.toString();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Prepend `prefix` to the start of each line of `string`, except the first. The lines should be
     * understood in the sense of `lines()`, so if `string` ends with a newline, the returned string
     * will end with the prefix.
     */
    public static String indentExceptFirst (String string, String prefix)
    {
        String[] lines = lines(string);
        StringBuilder b = new StringBuilder();
        append(b, lines[0], "\n");
        for (int i = 1; i < lines.length; ++i)
            append(b, prefix, lines[i], "\n");
        pop(b, 1); // last newline
        return b.toString();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Appends all strings in {@code strings} to {@code b}.
     */
    public static void append (StringBuilder b, String... strings) {
        for (String string: strings) b.append(string);
    }

    // ---------------------------------------------------------------------------------------------


    /**
     * Removes the {@code n} last characters from {@code b}.
     * @throws NoSuchElementException if the string builder has less than {@code n} characters.
     */
    public static void pop (StringBuilder b, int n)
    {
        if (b.length() < n) throw new NoSuchElementException();
        b.replace(b.length() - n, b.length(), "");
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Joins the string representation of items in {@code items}, separating them with {@code sep}.
     * This is appended to {@code b}, which is then returned.
     */
    public static StringBuilder join (StringBuilder b, String sep, Object... items)
    {
        int length = b.length();
        for (Object item: items)
            b.append(item).append(sep);
        if (b.length() > length)
            pop(b, sep.length());
        return b;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Joins the string representation of items in {@code items}, separating them with {@code sep}.
     */
    public static String join (String sep, Object... items) {
        return join(new StringBuilder(), sep, items).toString();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Joins the string representation of items in {@code items}, separating them with {@code sep}.
     * This is appended to {@code b}, which is then returned.
     */
    public static StringBuilder join (StringBuilder b, String sep, Iterable<?> items)
    {
        int length = b.length();
        for (Object item: items)
            b.append(item).append(sep);
        if (b.length() > length)
            pop(b, sep.length());
        return b;
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Joins the string representation of items in {@code items}, separating them with {@code sep}.
     */
    public static String join (String sep, Iterable<?> items) {
        return join(new StringBuilder(), sep, items).toString();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Joins the string representation of items in {@code items}, separating them with {@code sep}.
     * This is appended to {@code b}, which is then returned.
     *
     * <p>Identical to {@link #join}, but fixes pesky Java warnings when passing an array
     * directly.
     */
    public static StringBuilder joinArray (StringBuilder b, String sep, Object[] items) {
        return join(b, sep, items);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Joins the string representation of items in {@code items}, separating them with {@code sep}.
     *
     * <p>Identical to {@link #join}, but fixes pesky Java warnings when passing an array
     * directly.
     */
    public static String joinArray (String sep, Object... items) {
        return joinArray(new StringBuilder(), sep, items).toString();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a human-friendly string representing a size in bytes - using the maximal unit
     * reached, and displaying one decimal place.
     *
     * @param si controls whether SI (international system) units are used or not. In SI, a KiB is
     * 1000B, whereas in the traditional system, a KB is 1024B.
     *
     * Source: https://stackoverflow.com/a/3758880/298664
     */
    public static String humanFriendlyByteCount (long bytes, boolean si)
    {
        int unit = si ? 1000 : 1024;
        if (bytes < unit) return bytes + " B";
        int exp = (int) (Math.log(bytes) / Math.log(unit));
        String pre = (si ? "kMGTPE" : "KMGTPE").charAt(exp-1) + (si ? "" : "i");
        return String.format("%.1f %sB", bytes / Math.pow(unit, exp), pre);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Return a capitalized version of string: the first character is uppercased.
     * <p>If you want to also force lowercase the rest of the string, use {@link #capitalizedForm}.
     * <p>Doesn't work on empty strings.
     */
    public static String capitalize (String string) {
        return string.substring(0, 1).toUpperCase() + string.substring(1);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a capitalized version of the string: the first character is uppercased and the other
     * characters are lowercased.
     * <p>If you just want to uppercase the first character, use {@link #capitalize}.
     * <p>Doesn't work on empty strings.
     */
    public static String capitalizedForm (String string) {
        return string.substring(0, 1).toUpperCase() + string.substring(1).toLowerCase();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns a copy of the string with the first character lowercased.
     * <p>Doesn't work on empty strings.
     */
    public static String uncapitalize (String string) {
        return string.substring(0, 1).toLowerCase() + string.substring(1);
    }

    // ---------------------------------------------------------------------------------------------
}
