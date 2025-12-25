package norswap.utils;

import java.util.Random;

/**
 * Utilities related to random number generation based on a private {@link Random} instance. These
 * methods are not thread-safe.
 */
public final class Chance
{
    // ---------------------------------------------------------------------------------------------

    private static final Random RANDOM = new Random();

    // ---------------------------------------------------------------------------------------------

    /**
     * Coin flip: 50/50.
     */
    public static boolean flip()
    {
        return RANDOM.nextBoolean();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Random int in the [0-bound[ range.
     */
    public static int random (int bound)
    {
        return RANDOM.nextInt(bound);
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Random integer (may be negative).
     */
    public static int random()
    {
        return RANDOM.nextInt();
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns one of the integers at random.
     */
    public static int selectp (int... array)
    {
        return array[RANDOM.nextInt(array.length)];
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns one of the characters at random.
     */
    public static char selectp (char... array)
    {
        return array[RANDOM.nextInt(array.length)];
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns one of the objects at random.
     */
    @SafeVarargs
    public static <T> T select (T... array)
    {
        return array[RANDOM.nextInt(array.length)];
    }

    // ---------------------------------------------------------------------------------------------

    /**
     * Returns true on average `times` times out of `outof`.
     */
    public static boolean probability (int times, int outof)
    {
        return RANDOM.nextInt(outof) < times;
    }

    // ---------------------------------------------------------------------------------------------
}
