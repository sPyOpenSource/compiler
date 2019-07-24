package jx.zero;

public interface DomainBorderOut extends DomainBorder,Portal {
    /**
     * @param info 
     *  @return true=allow call; false=block call */
    boolean outBound(InterceptOutboundInfo info);
}
