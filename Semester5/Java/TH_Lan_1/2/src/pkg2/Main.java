/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg2;
import java.io.File;
import java.io.FileNotFoundException;
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
        Scanner sc = new Scanner(new File ("DAYSO.in"));
        int t = sc.nextInt();
        while(t -- > 0)
        {
            int  n = sc.nextInt();
            ArrayList<Integer> a = new ArrayList<>();
            for(int i=0; i<n; i++)
                 a.add(sc.nextInt());
            Collections.sort(a);
            long   x = 0 , y  = 0;
            int i = 0;
            while (i < a.size())
            {
                x = x * 10 + a.get(i);
                i += 2;
                
            }
            i = 1;
              while (i < a.size())
            {
                y = y * 10 + a.get(i);
                i += 2;
                
            }
            System.out.println(x + y);
            
        }
    }
    
}
