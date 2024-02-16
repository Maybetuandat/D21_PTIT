/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package logthoigian;

import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class Logthoigian {

    /**
     * @param args the command line arguments
     */
   
    
    public static boolean check(String s)
    {
        String []a = s.split(":");
        if(a.length !=  3)
            return false;
        try 
        {
            int gio = Integer.parseInt(a[0]);
            if(gio <0 || gio > 23)
                return false;
            int phut = Integer.parseInt(a[1]);
            if(phut <0 || phut > 59)
                return false;
             int giay = Integer.parseInt(a[2]);
             if(giay < 0 || giay > 59)
                 return false;
        } 
        catch (Exception e) 
        {
            return false;
        }
       
       return true;
       
      
    }
    public static boolean kt(String s, int begin, int end)
    {
        boolean kt1 = false, k2 = false;
        if(begin == -1|| s.charAt(begin) == '.' || s.charAt(begin) == ',' || s.charAt(begin) == ' ')
            kt1 = true;
        if(end == s.length() || s.charAt(end) == '.' || s.charAt(end) == ',' || s.charAt(end) == ' ')
            k2 = true;
        if(kt1== true && k2 == true)
        {
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
        // TODO code application logic here
       Scanner sc = new Scanner(System.in);
       TreeSet<String> ts1 = new TreeSet<>();
       
       while(sc.hasNextLine())
       {
           String s = sc.nextLine();
           int n = s.length();
           for(int i=0; i<n-7; i++)
           {
               if(Character.isDigit(s.charAt(i)))
               {
                   String cmp = s.substring(i, i + 8);
                   if(check(cmp) && kt(s, i - 1, i + 8) )
                   {
                       ts1.add(cmp);
                   }
               }
           }
       }
       for(String x : ts1)
       {
           System.out.println(x);
       }
        
    }
    
}
