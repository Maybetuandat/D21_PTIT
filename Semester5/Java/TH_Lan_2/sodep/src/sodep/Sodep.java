/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package sodep;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Sodep {

    /**
     * @param args the command line arguments
     */
    public static boolean check(int n)
    {
        String s = n +"";
        for(int i=0; i<s.length() - 1; i++)
        {
            if(s.charAt(i) > s.charAt(i+1) )
                return false;
        }
        return true;
    }
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ds1 = (ArrayList<Integer>) in1.readObject();
        ArrayList<Integer> ds2 = (ArrayList<Integer>) in2.readObject();
        int [] dem1 = new int[10009];
        int []dem2 = new int[10009];
        ArrayList<Integer> ans = new ArrayList<>();
        for(int x : ds1)
        {
            dem1[x]++;
        }
        for(int x : ds2)
        {
            dem2[x]++;
        }
        for(int i=10; i<= 9999; i++)
        {
            if(check(i))
            {
                System.out.println(i + " "+ dem1[i] + " " + dem2[i]);
            }
        }
    }
    
}
