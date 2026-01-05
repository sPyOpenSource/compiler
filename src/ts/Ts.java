package ts;
import java.io.*;
import java.util.*;
import sa.*;
import util.Type;

public class Ts
{
    public Map< String, TsItemFct> fonctions;
    public Map< String, TsItemVar> variables;
    private int adrVarCourante;
    private int adrArgCourante;

    public int getAdrVarCourante(){return adrVarCourante;}
    public int getAdrArgCourante(){return adrArgCourante;}

    public Ts(){
	this.fonctions = new HashMap< >();
	this.variables = new HashMap< >();
	this.adrVarCourante = 0;
	this.adrArgCourante = 0;
    }
    
    public TsItemVar addVar(String identif, Type type)
    {
	TsItemVar item = new TsItemVarSimple(identif, type);
	item.portee = this;
	item.adresse = this.adrVarCourante;
	item.isParam = false;
	this.adrVarCourante += type.taille();
	this.variables.put(identif, item);
	return item;
    }

    public TsItemVar addParam(String identif, Type type)
    {
	TsItemVar item = new TsItemVarSimple(identif, type);
	item.portee = this;
	item.adresse = this.adrArgCourante;
	item.isParam = true;
	this.adrArgCourante += type.taille();
	this.variables.put(identif, item);
	return item;
    }

    public TsItemVar addTab(String identif, Type type, int taille)
    {
	TsItemVar item = new TsItemVarTab(identif, type, taille);
	item.portee = this;
	item.adresse = this.adrVarCourante;
	this.adrVarCourante += taille * type.taille();
	this.variables.put(identif, item);
	return item;
    }

    public TsItemFct addFct(String identif, Type typeRetour, int nbArgs, Ts table, SaDecFonc saDecFonc)
    {
	TsItemFct item = new TsItemFct(identif, typeRetour, nbArgs, table, saDecFonc);
	this.fonctions.put(identif, item);
	return item;
    }

    public TsItemVar getVar(String identif)
    {
	return variables.get(identif);
    }
    
    public TsItemFct getFct(String identif)
    {
	return fonctions.get(identif);
    }
    
    public Ts getTableLocale(String identif){
	TsItemFct item = this.fonctions.get(identif);
	if(item == null)
	    return null;
	else
	    return item.getTable();
    }
    
	 
    public void affiche(PrintStream out){
	ArrayList< Map.Entry< String, TsItemVar> > stVar = new ArrayList<>(this.variables.entrySet());
	Collections.sort(stVar, new Comparator<>() {
		@Override
		public int compare(Map.Entry< String, TsItemVar> entry1, Map.Entry< String, TsItemVar> entry2)
		{
		    return entry1.getKey().compareTo(entry2.getKey());
		}
	    });
	for (Map.Entry< String, TsItemVar> me:stVar){ 
	    out.println(me.getValue());
	    //	    out.println(me.getKey() + ":\t" + me.getValue());
	}
	
	ArrayList< Map.Entry< String, TsItemFct> > stFct = new ArrayList<>(this.fonctions.entrySet());
	Collections.sort(stFct, new Comparator<>() {
		@Override
		public int compare(Map.Entry< String, TsItemFct> entry1, Map.Entry< String, TsItemFct> entry2)
		{
		    return entry1.getKey().compareTo(entry2.getKey());
		}
	    });
	for (Map.Entry< String, TsItemFct> me:stFct){ 
	    out.println(me.getValue());
	    //	    out.println(me.getKey() + ":\t" + me.getValue());
	}
    }
	
    public void afficheTablesLocales(PrintStream out){
	ArrayList< Map.Entry< String, TsItemFct> > st = new ArrayList<>(this.fonctions.entrySet());
	Collections.sort(st, new Comparator<>() {
		@Override
		public int compare(Map.Entry< String, TsItemFct> entry1, Map.Entry< String, TsItemFct> entry2)
		{
		    return entry1.getKey().compareTo(entry2.getKey());
		}
	    });
	for (Map.Entry< String, TsItemFct> me:st){
	    if(me.getValue().getTable() != null){
		out.println("TABLE LOCALE : " + me.getKey());
		me.getValue().getTable().affiche(out);
	    }
	}
    }
    
    public void afficheTout(String baseFileName){
	String fileName;
	PrintStream out = System.out;
	
	if (baseFileName != null){
	    try {
		fileName = baseFileName + ".ts";
		out = new PrintStream(fileName);
	    }
	    
	    catch (IOException e) {
		System.err.println("Error: " + e.getMessage());
	    }
	}
       	out.println("TABLE GLOBALE");
	this.affiche(out);
	this.afficheTablesLocales(out);
    }

}
