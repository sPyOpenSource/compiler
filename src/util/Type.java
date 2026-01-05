package util;

public enum Type{
    NUL("nul", 0),
    ENTIER("entier", 4),
    BOOL("bool", 1);

    private final String nom;
    private final int taille; // taille en octets

    Type(String nom, int taille){
	this.nom = nom;
	this.taille = taille;
    }

    @Override
    public String toString(){return nom;}
    public static Type fromString(String nom){
	if(nom.equals("entier")){return Type.ENTIER;}
	if(nom.equals("ENTIER")){return Type.ENTIER;}
	if(nom.equals("bool")){return Type.BOOL;}
	if(nom.equals("BOOL")){return Type.BOOL;}
	if(nom.equals("nul")){return Type.NUL;}
	if(nom.equals("NUL")){return Type.NUL;}
	return null;
    }
    
    public String nom(){return nom;}
    public int taille(){return taille;}
    public static boolean checkCompatibility(Type t1, Type t2){return t1 == t2;}
}
