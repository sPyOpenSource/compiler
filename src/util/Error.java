package util;

public enum Error{
    NOERROR(0, "sortie normale"),
    TYPE(3, "erreur de types"),
    TS(4, "table des symboles"),
    SYNT(5,"erreur de syntaxe"),
    LEX(6, "lexical error");

    private final String message;
    private final int code;
    
    Error(int code, String message){
	this.code = code;
	this.message = message;
    }

    @Override
    public String toString(){return message;}
    public String message(){return message;}
    public int code(){return code;}
}
