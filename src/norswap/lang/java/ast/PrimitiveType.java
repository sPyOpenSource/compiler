package norswap.lang.java.ast;

import java.util.List;

public record PrimitiveType 
(List<TAnnotation> annotations,
   BasicType name)implements TType{
}
