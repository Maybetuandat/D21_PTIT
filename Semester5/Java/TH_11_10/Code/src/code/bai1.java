/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package code;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class bai1 {
        public static void main(String[] args) {
           Scanner sc= new Scanner(System.in);
           String s = sc.next();
           while(s.length()  > 1)
           {
               BigInteger a = new BigInteger(s.substring(0, s.length() / 2));
               BigInteger b = new BigInteger(s.substring(s.length() / 2, s.length()));
               a = a.add(b);
               System.out.println(a);
               s = a.toString();
           }
          
    }
}
