/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07071_tenviettat;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07071_tenviettat {

    /**
     * @param args the command line arguments
     */
    public static   boolean check(String  s1, String s2)
    {
        if(s1.length() != s2.length())
            return false;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1.charAt(i) == '*') continue;
            if(s1.charAt(i) != s2.charAt(i))  return false;
        }
        return true;
    }
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc =  new Scanner(new File("DANHSACH.in"));
        ArrayList<Person> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add(new Person(sc.nextLine()));
        }
        int q  = sc.nextInt();
        while(q-- > 0)
        {
            String cmp = sc.next();
            ArrayList<Person> ds1 = new ArrayList<>();
            for(Person x : ds)
            {
                if(check(cmp, x.getViettat()))
                {
                      ds1.add(x);
                }
            }
            Collections.sort(ds1);
            for(Person x : ds1)
            {
                System.out.println(x);
            }
        }
    }
    
}
