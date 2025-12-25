package norswap.lang.java.ast;

import java.util.List;

public record ClassType(List<ClassTypePart> parts) implements TType
{
}
