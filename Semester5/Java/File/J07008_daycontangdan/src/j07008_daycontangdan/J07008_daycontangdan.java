/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07008_daycontangdan;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07008_daycontangdan {

    /**
     * @param args the command line arguments
     */
    public static String check(ArrayList<Integer> a)
    {
        int n = a.size();
        if( n < 2)
            return "false";
        for(int i = 0; i<n - 1;  i++ )
            if(a.get(i) > a.get(i+1))
                return "false";
        String cmp = "";
        for(int x : a)
            cmp = cmp + x + " ";
        return cmp.trim();
    }
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("DAYSO.in"));
        int n = sc.nextInt();
        int [] a = new int[n + 1];
        for(int i=1; i<=n; i++)
            a[i] = sc.nextInt();
        ArrayList<String> ds = new ArrayList<>();
        int [] np = new int[n + 1];
        ArrayList<Integer>  cmp = new ArrayList<>();
        while(true)
        {
            cmp.clear();
            int k = n;
            while(np[k] == 1)
            {
                np[k] = 0;
                k--;
            }
            if(k == 0)
                 break;
            np[k] = 1;
            for(int i=1; i<=n; i++)
            {
                if(np[i] == 1)
                    cmp.add(a[i]);
            }
            if(check(cmp) != "false")
            {
                ds.add(check(cmp));
            }
        }
        Collections.sort(ds);
        for(String x : ds)
        {
            System.out.println(x);
        }
        
    }
    
}
