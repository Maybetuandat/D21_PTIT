/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg1;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        TreeSet<Integer> ts1 = new TreeSet<>();
        for(int i=0; i<n; i++)
             ts1.add(sc.nextInt());
        TreeSet<Integer> ts2 = new TreeSet<>();
        for(int i=0; i<m; i++)
            ts2.add(sc.nextInt());
        TreeSet<Integer> ts3 = new TreeSet<>(ts1);
        ts3.retainAll(ts2);
        for(int x : ts3)
        {
            System.out.print(x + " ");
        }
        System.out.println("");
         Set<Integer> differenceB = new TreeSet<>(ts1);
        differenceB.removeAll(ts2);
         Set<Integer> differenceA = new TreeSet<>(ts2);
        differenceA.removeAll(ts1);
       
        
        for(int x :differenceB)
        {
            System.out.print(x +  " ");
        }
        System.out.println("");
         for(int x : differenceA)
        {
            System.out.print(x + " ");
        }
    }
    
}
