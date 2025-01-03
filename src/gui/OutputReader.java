
package gui;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JTextArea;

/**
 *
 * @author spy
 */
public class OutputReader implements Runnable{
    private final JTextArea jtextArea;
    
    public OutputReader(JTextArea jtextArea){
        this.jtextArea = jtextArea;
    }

    @Override
    public void run() {
        try {
            BufferedReader in = new BufferedReader(new FileReader("/home/spy/output.txt"));
            String line = "";
            while (true) {
                int i = in.read();
                if(i != -1){
                    if(i == 10){
                        jtextArea.append(line);
                        jtextArea.append("\n");
                        jtextArea.setCaretPosition(jtextArea.getDocument().getLength());
                        line = "";
                    } else {
                        line += String.valueOf((char)i);
                    }
                }
                try {
                    Thread.sleep(500);
                } catch (InterruptedException ex) {
                    Logger.getLogger(OutputReader.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        } catch (IOException ex){
            Logger.getLogger(OutputReader.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}
