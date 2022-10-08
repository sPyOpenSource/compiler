
package test;

import j2ll.Main;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.junit.Test;

/**
 *
 * @author xuyi
 */
public class JUnitTest {
    @Test
    public void testLLVM(){
        try {
            Main.conv("", "", "");
        } catch (IOException ex) {
            Logger.getLogger(JUnitTest.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}
