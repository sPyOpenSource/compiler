import jx.compiler.*;
import jx.compiler.persistent.*;
import java.io.*;
import jx.compiler.execenv.IOSystem;

public class ARMTestDriver {
    public static void main(String[] args) throws Exception {
        CompilerOptions opts = new CompilerOptions();
        opts.setCodeType("arm");
        
        // Use a dummy output file
        ExtendedDataOutputStream codeOut = new ExtendedDataOutputStream("test_arm.bin");
        ExtendedDataOutputStream tableOut = new ExtendedDataOutputStream("test_arm.table");
        
        // domainZip expects a list of zip/jar files
        String[] domainZip = { "TestArithmetic.jar" };
        String[] libZip = { };
        ExtendedDataInputStream[] tableIn = { };
        
        IOSystem io = new IOSystem() {
            private String path = ".";
            @Override
            public OutputStream getOutputStream(String filename) throws IOException {
                return new FileOutputStream(path + "/" + filename);
            }
            @Override
            public void set(String path) { this.path = path; }
        };
        
        System.out.println("Starting StaticCompiler for ARM...");
        StaticCompiler compiler = new StaticCompiler(codeOut, tableOut, domainZip, libZip, tableIn, opts, io);
        System.out.println("Compilation finished!");
    }
}
