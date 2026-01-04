package norswap.lang.rust.scopes;

import norswap.lang.rust.ast.RootNode;
import norswap.lang.rust.types.*;
import norswap.uranium.Reactor;

import static norswap.lang.rust.scopes.DeclarationKind.*;

/**
 * The lexical scope of a file in Sigh. It is notably responsible for introducing the default
 * declarations made by the language.
 */
public final class Context extends Scope
{
    // ---------------------------------------------------------------------------------------------

    private SyntheticDeclaration decl (String name, DeclarationKind kind) {
        SyntheticDeclaration decl = new SyntheticDeclaration(name, kind);
        declare(name,  decl);
        return decl;
    }

    // ---------------------------------------------------------------------------------------------

    // root scope types
    public final SyntheticDeclaration Bool   = decl("Bool",   TYPE);
    public final SyntheticDeclaration Int    = decl("i32",    TYPE);
    public final SyntheticDeclaration Float  = decl("f32",  TYPE);
    public final SyntheticDeclaration String = decl("String", TYPE);
    public final SyntheticDeclaration Void   = decl("Void",   TYPE);
    public final SyntheticDeclaration Type   = decl("Type",   TYPE);

    // root scope variables
    public final SyntheticDeclaration _true  = decl("true",  VARIABLE);
    public final SyntheticDeclaration _false = decl("false", VARIABLE);
    public final SyntheticDeclaration _null  = decl("null",  VARIABLE);

    // root scope functions
    public final SyntheticDeclaration print = decl("print", FUNCTION);

    // ---------------------------------------------------------------------------------------------

    public Context (RootNode node, Reactor reactor) {
        super(node, null);

        reactor.set(Bool,   "type",       TypeType.INSTANCE);
        reactor.set(Int,    "type",       TypeType.INSTANCE);
        reactor.set(Float,  "type",       TypeType.INSTANCE);
        reactor.set(String, "type",       TypeType.INSTANCE);
        reactor.set(Void,   "type",       TypeType.INSTANCE);
        reactor.set(Type,   "type",       TypeType.INSTANCE);

        reactor.set(Bool,   "declared",   BoolType.INSTANCE);
        reactor.set(Int,    "declared",    IntType.INSTANCE);
        reactor.set(Float,  "declared",  FloatType.INSTANCE);
        reactor.set(String, "declared", StringType.INSTANCE);
        reactor.set(Void,   "declared",   VoidType.INSTANCE);
        reactor.set(Type,   "declared",   TypeType.INSTANCE);

        reactor.set(_true,  "type",       BoolType.INSTANCE);
        reactor.set(_false, "type",       BoolType.INSTANCE);
        reactor.set(_null,  "type",       NullType.INSTANCE);

        reactor.set(print,  "type", new FunType(StringType.INSTANCE, StringType.INSTANCE));
    }

    // ---------------------------------------------------------------------------------------------
}
