import jx.compiler.backend.*;

public class TestARMBackend {
    public static void main(String[] args) {
        BinaryCodeDynamicARM arm = new BinaryCodeDynamicARM();
        
        System.out.println("Testing mov...");
        Reg r0 = new Reg(0);
        Reg r1 = new Reg(1);
        arm.mov(r1, r0); // MOV R0, R1
        
        System.out.println("Testing add...");
        arm.add(r1, r0); // ADD R0, R0, R1
        
        System.out.println("Testing sub imm...");
        arm.sub(1, r0); // SUB R0, R0, #1
        
        System.out.println("Testing push/pop...");
        arm.push(r0);
        arm.pop(r0);
        
        byte[] code = arm.getBinaryCodeAsHex().getBytes();
        System.out.println("Final code hex: " + arm.getBinaryCodeAsHex());
    }
}
