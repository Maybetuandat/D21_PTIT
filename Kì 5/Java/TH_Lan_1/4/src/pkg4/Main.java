/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg4;
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
        int  n = Integer.parseInt(sc.nextLine());
        TreeSet<String> s1 = new TreeSet<>();
        TreeSet<String> s2 = new TreeSet<>();
        for(int i=0; i<n; i++)
        {
      
            for(String x : sc.nextLine().toLowerCase().split("\\s+"))
                s1.add(x);
        }
        int m = Integer.parseInt(sc.nextLine());
        for(int i=0; i<m; i++)
        {
            for(String x : sc.nextLine().toLowerCase().split("\\s+"))
                s2.add(x);
        }
        for(String x : s1){
            if(s2.contains(x)== false){
                System.out.print(x + " ");
            }
        }
        System.out.println("");
        for(String x : s2){
            if(s1.contains(x)== false){
                System.out.print(x + " ");
        }
        }
    
}
}
