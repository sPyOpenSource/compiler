package norswap.lang.java.ast;

import java.util.List;

public record StTryCaFi 
(
    List<TryResource> resources,
    Block body,
    List<CatchClause> catch_clauses,
    @Nullable Block finally_block
) implements Statement {
    public static StTryCaFi mk (
        List<TryResource> resources, Block body, List<CatchClause> catch_clauses,
        @Nullable Block finally_block)
    {
        return new StTryCaFi(resources, body, catch_clauses, finally_block);
    }
}
