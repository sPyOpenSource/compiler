package norswap.utils;

/**
 * An enum that can be used to identify various operating systems.
 */
public enum OperatingSystem {
    MAC,
    WINDOWS,
    UNIX,
    SOLARIS,
    UNKNOWN;

    /** The operating system that the code is running on. */
    public static final OperatingSystem OS;

    static {
        String name = System.getProperty("os.name").toLowerCase();
        if (name.contains("win")) {
            OS = WINDOWS;
        } else if (name.contains("mac")) {
            OS = MAC;
        } else if (name.contains("nix") || name.contains("nux") || name.contains("aix")) {
            OS = UNIX;
        } else if (name.contains("sunos")) {
            OS = SOLARIS;
        } else {
            OS = UNKNOWN;
        }
    }
}