/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07078_timvitrixaucon;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07078_timvitrixaucon {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("STRING.in"));
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
             String s1 = sc.nextLine();
             String s2 = sc.nextLine();
             for(int i=0; i<s1.length() - s2.length() + 1; i++)
             {
                 if(s1.charAt(i) == s2.charAt(0))
                 {
                     String cmp = s1.substring(i, i + s2.length());
                     if(cmp.compareTo(s2) == 0)
                     {
                         System.out.print((i + 1) +" ");
                     }
                 }
             }
             System.out.println("");
        }
        
    }
    
}
