/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07031_capsonguyentotrongfile2;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07031_capsonguyentotrongfile2 {

    /**
     * @param args the command line arguments
     */
    public static int nmax = (int) 1e6;
    public static int [] isprime = new int[nmax + 9];
    public static void init()
    {
        isprime[0] = 1;
        isprime[1] = 1;
        for(int i=2; i<= Math.sqrt(nmax); i++)
        {
            if(isprime[i] == 0)
            {
                for(int j=2; j<= nmax / i; j++)
                {
                    isprime[i*j] = 1;
                }
            }
        }
    }
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        init();
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ArrayList<Integer> ds1 = (ArrayList<Integer>) in1.readObject();
        HashSet<Integer> file1 = new HashSet<>();
        for(int x : ds1)
            if(isprime[x] == 0)
               file1.add(x);
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ds2 = (ArrayList<Integer>) in2.readObject();
        HashSet<Integer> file2 = new HashSet<>();
        for(int x : ds2)
            if(isprime[x] == 0)
               file2.add(x);
        
        for(int i = 2; i< nmax / 2; i++)
        {
            if(file1.contains(i) && file1.contains(nmax - i) && !file2.contains(i) && !file2.contains(nmax - i) )
            {
                System.out.println(i + " " + (nmax - i));
            }
        }
        
    }
    
}
