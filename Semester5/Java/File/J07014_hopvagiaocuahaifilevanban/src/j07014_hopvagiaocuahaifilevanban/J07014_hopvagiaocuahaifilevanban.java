/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07014_hopvagiaocuahaifilevanban;
import java.io.IOException;

/**
 *
 * @author Dell Gaming
 */
public class J07014_hopvagiaocuahaifilevanban {

    /**
     * @param args the command line arguments
     */
  public static void main(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in");
        WordSet s2 = new WordSet("DATA2.in");
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
    
}
