package norswap.lang.java.ast;

import java.util.List;

public record JavaFile 
(
     @Nullable PackageDeclaration package_declaration,
     List<ImportDeclaration> imports,
     List<TypeDeclaration> type_declarations)
implements Statement{
    public static JavaFile mk (
        @Nullable PackageDeclaration package_declaration, List<ImportDeclaration> imports,
        List<TypeDeclaration> type_declarations)
    {
        return new JavaFile(package_declaration, imports, type_declarations);
    }
}
