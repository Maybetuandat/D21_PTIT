/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package xulivanban1;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Xulivanban1 {

    /**
     * @param args the command line arguments
     */
    public static boolean check(String s)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(Character.isDigit(s.charAt(i)))
            {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("VANBAN.in"));
        TreeSet<String> ts1 = new TreeSet<>();
        while(sc.hasNext())
        {
            String cmp = sc.next();
            if(check(cmp))
            {
                ts1.add(cmp);
            }
        }
        for(String x : ts1)
        {
            System.out.println(x);
        }
    }
    
}
