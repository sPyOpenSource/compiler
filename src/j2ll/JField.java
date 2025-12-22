
package j2ll;

/**
 * Java Field
 */
public class JField {

    String className;
    String name;
    String javaSignature;

    public JField(String name, String javaSignature) {
        this(null, name, javaSignature);
    }

    public JField(String className, String name, String javaSignature) {
        this.className = className;
        this.name = name;
        this.javaSignature = javaSignature;
    }

    @Override
    public int hashCode() {
        String s = className + name + javaSignature;
        return s.hashCode();
    }

    @Override
    public boolean equals(Object o) {
        if (o instanceof JField f) {
            if (className != null && className.equals(f.className) || className.equals(f.className)) {
                if (name != null && name.equals(f.name) || name.equals(f.name)) {
                    if (javaSignature != null && javaSignature.equals(f.javaSignature) || javaSignature.equals(f.javaSignature)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
}
