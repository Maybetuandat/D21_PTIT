/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package xaunpdoixungdodaik;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Xaunpdoixungdodaik {

    /**
     * @param args the command line arguments
     */
    public static int n;
    public static int []a = new int[50];
    public static void init()
    {
        for(int i=0; i<n; i++)
        {
            a[i] = 0;
        }
    }
   public static void  inra()
   {
        for(int i=0; i<n; i++)
        {
              System.out.print(a[i]);
        }
        for(int i=0; i<n; i++)
           {
               System.out.print(a[n-i-1]);
             }
         System.out.print(" ");
   }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n1 = sc.nextInt();
            int n2 = 2;
            while(n2 <= n1)
            {
                n = n2 /2 ;
                init();
           
                while(true)
                {
                    inra();
                   int i = n-1;
                   while(i >= 0 && a[i] == 1)
                   {
                       a[i] = 0;
                       i--;
                       
                   }
                   if(i < 0)
                   {
                     
                       break;
                   }
                     
                   else
                   {
                       a[i] = 1;
                           inra();
                      
                   }
                   
                    
                }
                n2 += 2;
            }
            System.out.println("");
            
        }
    }
    
}
