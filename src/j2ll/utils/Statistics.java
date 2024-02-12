
package j2ll.utils;

import j2ll.LocalVarTable;
import java.util.HashMap;
import java.util.Map;

/**
 * Statistics
 */
public final class Statistics {

    private final Resolver resolver = new Resolver();
    private final Map<String, LocalVarTable> vars = new HashMap<>();

    public Resolver getResolver() {
        return resolver;
    }

    public void put(String name, LocalVarTable lv) {
        this.vars.put(name, lv);
    }

    public LocalVarTable get(String name) {
        return this.vars.get(name);
    }
    
}
