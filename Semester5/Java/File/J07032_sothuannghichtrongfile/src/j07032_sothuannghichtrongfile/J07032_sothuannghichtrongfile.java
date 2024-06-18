/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07032_sothuannghichtrongfile;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class J07032_sothuannghichtrongfile {   
   
    
    public static boolean check(String s)
    {
        int n = s.length();
        if(n % 2 == 0)
            return false;
        if(n == 1)
            return false;
        // sai th số ở vị trí n / 2 có giá trị chẵn
        for(int i=0; i<=n / 2; i++)
        {
            int x =(int)( s.charAt(i) - '0');
            if(x % 2  == 0)
                  return false;
            if(s.charAt(i) != s.charAt(n - i - 1))
                return false;
        }
        return true;
    }
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        int nmax = (int) 1e6;
        int []dem = new int[nmax + 9];
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ArrayList<Integer> ds1 = (ArrayList<Integer>) in1.readObject();
       
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ds2 = (ArrayList<Integer>) in2.readObject();
        TreeSet<Integer> ts1 = new TreeSet<>();
        TreeSet<Integer> ts2 = new TreeSet<>();
         for(int x : ds1)
         {
            
                 dem[x]++;
                 ts1.add(x);
            
         }
            
              
        for(int x : ds2)
        {
           
                  dem[x]++;
                  ts2.add(x);
             
        }
        int count = 0;
        for(int x : ts1)
        {
            if(count == 10)
                  break;
            if(ts2.contains(x) == true && check(String.valueOf(x)) == true)
            {
                count++;
                System.out.println(x + " " + dem[x]);
            }
        }
        
       
        
       
        
    }
    
}