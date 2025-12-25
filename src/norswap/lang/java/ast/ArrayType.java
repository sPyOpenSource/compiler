package norswap.lang.java.ast;

import java.util.List;

public record ArrayType(TType stem, List<Dimension> dimensions) implements TType
{
}
