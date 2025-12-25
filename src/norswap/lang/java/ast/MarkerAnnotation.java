package norswap.lang.java.ast;

import java.util.ArrayList;
import java.util.List;

public record MarkerAnnotation (List<Identifier> name)implements TAnnotation
{
    public static MarkerAnnotation mk (List<Identifier> name) {
        return new MarkerAnnotation(name);
    }

    public static MarkerAnnotation strings (String... names)
    {
        List<Identifier> idens = new ArrayList<>(names.length);
        for (String name: names) idens.add(Identifier.mk(name));
        return new MarkerAnnotation(idens);
    }
}