/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg7;
import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File ("DATA.in"));
        BigInteger sum = new BigInteger("0");
        while(sc.hasNext()){
            try {
                long x = Long.parseLong(sc.next());
                if( x > Integer.MAX_VALUE)
                    sum = sum.add(BigInteger.valueOf(x));
                } 
            catch (Exception e) 
            {
                
            }
        }
        System.out.println(sum);
    }
    
}
