/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07085_tongchuso;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07085_tongchuso {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> ds = (ArrayList<String>) in1.readObject();
        for(String x : ds)
        {
           int n = x.length();
           String cmp = "";
           int sum = 0;
           for(int i=0; i<n; i++)
           {
               if(Character.isDigit(x.charAt(i)))
               {
                   cmp += x.charAt(i);
                   sum += (x.charAt(i) - '0');
               }
           }
            System.out.println(new BigInteger(cmp) + " "+ sum);
        }
    }
    
}
