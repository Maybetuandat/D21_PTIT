/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg15;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main {

    /**
     * @param args the command line arguments
     * @throws java.io.FileNotFoundException
     */
     public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("VANBAN.in"));
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}
