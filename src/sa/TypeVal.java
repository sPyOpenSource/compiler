package sa;

import util.Type;

public class TypeVal{
    
    public Type type;
    public boolean valBool;
    public int valInt;

    public TypeVal(int val)
    {
	type = Type.ENTIER;
	valInt = val;
    }
    
    public TypeVal(boolean val)
    {
	type = Type.BOOL;
	valBool = val;
    }

    @Override
    public String toString(){
	if(type == Type.BOOL){
	    return (valBool == true)? String.valueOf(1): String.valueOf(0);
	}
	else{
	    return String.valueOf(valInt);
	}
    }

}
