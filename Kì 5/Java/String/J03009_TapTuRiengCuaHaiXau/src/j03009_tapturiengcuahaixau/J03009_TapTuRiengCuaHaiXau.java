/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03009_tapturiengcuahaixau;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class J03009_TapTuRiengCuaHaiXau {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String [] s1 = sc.nextLine().split("\\s+");
            HashSet<String> s2 = new HashSet<String>();
            TreeSet<String> ans = new TreeSet<>();
            for(String x : sc.nextLine().split("\\s+"))
                s2.add(x);
           for (String x : s1)
           {
               if(s2.contains(x) == false){
                   ans.add(x);
               }
           }
           for(String x : ans)
           {
               System.out.print(x + " ");
           }
            System.out.println("");
        }
    }
    
}
