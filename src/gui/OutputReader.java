/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
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
    private JTextArea jtextArea;
    public OutputReader(JTextArea jtextArea){
        this.jtextArea = jtextArea;
    }

    @Override
    public void run() {
        BufferedReader in = null;
        try {
            in = new BufferedReader(new FileReader("/home/spy/test.os"));
            String str;
            while (true) {
                if((str = in.readLine()) != null){
                jtextArea.append(str);
                jtextArea.append("\n");
                try {
                    Thread.sleep(50);
                } catch (InterruptedException ex) {
                    Logger.getLogger(OutputReader.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
            }
        } catch (IOException e){
            
        }
    }
}
