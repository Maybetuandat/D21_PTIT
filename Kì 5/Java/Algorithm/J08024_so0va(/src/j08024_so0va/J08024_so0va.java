/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j08024_so0va;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J08024_so0va {

    /**
     * @param args the command line arguments
     */
   public static void xuli(int n)
   {
       Queue<String> q = new LinkedList<>();
       q.add("9");
       while(!q.isEmpty())
       {
           String top = q.poll();
           long adu = Long.parseLong(top);
           if(adu % n  == 0)
           {
               System.out.println(adu);
               return;
           }
           q.add(top + "0");
           q.add(top + "9");
       }
   }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- >0)
        {
             int n = sc.nextInt();
             xuli(n);
        }
    }
    
}
