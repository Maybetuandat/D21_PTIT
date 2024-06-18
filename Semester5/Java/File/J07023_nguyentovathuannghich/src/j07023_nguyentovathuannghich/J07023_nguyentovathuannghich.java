/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07023_nguyentovathuannghich;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07023_nguyentovathuannghich {

    /**
     * @param args the command line arguments
     */
    public static boolean check(String  x)
    {
        int k = Integer.parseInt(x);
        if(k <= 1)
            return false;
        for(int i=2; i<= Math.sqrt(k); i++)
        {
            if(k % i == 0)
                return false;
        }
        int n = x.length();
        for(int i=0; i < n /2; i++)
        {
            if(x.charAt(i) != x.charAt(n - i - 1))
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
        int [] dem2 = new int[10009];
        for(int x : ds1)
        {
            dem1[x]++;
        }
        for(int x : ds2)
        {
            dem2[x]++;
        }
        for(int i=2;  i  < 10000; i++)
        {
            if(check(String.valueOf(i)) && dem1[i] != 0 && dem2[i] != 0)
            {
                System.out.println(i + " " + dem1[i] + " " + dem2[i]);
            }
        }
    }
    
}
