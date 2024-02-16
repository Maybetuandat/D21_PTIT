/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Bai1;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main {
      public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);
           int t = sc.nextInt();
           while(t-- > 0)
           {
               int n = sc.nextInt();
               TreeSet<Integer> tschan = new TreeSet<>();
               TreeSet<Integer> tsle = new TreeSet<>(Comparator.reverseOrder());
               for(int i=0; i<n; i++)
               {
                   int x = sc.nextInt();
                   if(x % 2 == 0)
                   {
                       tschan.add(x);
                   }
                   else
                   {
                       tsle.add(x);
                   }
               }
               for(int x : tschan)
               {
                   System.out.print(x + " ");
               }
               System.out.println("");
               for(int x : tsle)
               {
                   System.out.print(x + " ");
               }
               System.out.println("");
           }
    }
}
