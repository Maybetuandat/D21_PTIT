/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package test;
import java.io.*;
/**
 *
 * @author Dell Gaming
 */
public class Test {

    /**
     * @param args the command line arguments
     * @throws java.io.IOException
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        FileOutputStream out = new FileOutputStream("CD.txt");
        for(int i=0; i<1000; i++){
            out.write(i);
        }
    }
    
}
