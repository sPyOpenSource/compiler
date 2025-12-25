package norswap.lang.java.ast;

import java.util.List;

public record TryStatement 
(
    List<TryResource> resources,
    Block body,
    List<CatchClause> catch_clauses,
    @Nullable Block finally_block)
implements Statement{
    public static TryStatement mk (
        List<TryResource> resources, Block body, List<CatchClause> catch_clauses,
        @Nullable Block finally_block)
    {
        return new TryStatement(resources, body, catch_clauses, finally_block);
    }
}
