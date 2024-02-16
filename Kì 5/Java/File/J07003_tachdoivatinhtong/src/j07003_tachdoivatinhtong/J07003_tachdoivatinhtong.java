/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07003_tachdoivatinhtong;
import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07003_tachdoivatinhtong {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("DATA.in"));
        String s = sc.next();
        while(s.length() != 1)
        {
            int n = s.length();
            String s1 = s.substring(0,  n / 2);
            String s2 = s.substring(n/2);
            BigInteger a = new BigInteger(s1);
            s = a.add(new BigInteger(s2)).toString();
            System.out.println(s);
        }
    }
    
}
