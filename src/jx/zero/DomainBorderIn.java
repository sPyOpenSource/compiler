package jx.zero;

public interface DomainBorderIn extends DomainBorder, Portal {
    /**
     * @param info 
     *  @return true=allow call; false=block call */
    boolean inBound(InterceptInboundInfo info);
}
