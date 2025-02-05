package jx.emulation;

import jx.zero.MemoryManager;
import jx.zero.*;

public class MemoryManagerImpl implements MemoryManager {
    
    @Override
    public Memory alloc(int size) {
	//Debug.out.println("Allocation request: "+size+" bytes.");
	return new MemoryImpl(size);
    }
    @Override
    public Memory allocAligned(int size, int bytes) {
	//Debug.out.println("Allocation request: "+size+" bytes.");
	return new MemoryImpl(size); // ignore alignment :-))
    }
    @Override
    public DeviceMemory  allocDeviceMemory(int start, int size) {
	return new MemoryImpl(size); // no real device memory in emulation mode
    }

    /* query global status information */
    @Override
    public int getTotalMemory() {return 0;}
    @Override
    public int getTotalFreeMemory(){return 0;}

    /* query domain specific status information */
    @Override
    public int getFreeHeapMemory(){return 0;}
}
