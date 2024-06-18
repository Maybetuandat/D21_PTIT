/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package danhsachcanh;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Danhsachcanh {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
               int  x = sc.nextInt();
                if(i >= j)
                    continue;
                if(x == 1)
                {
                    Pair<Integer, Integer> t = new Pair<Integer, Integer>(i, j );
                    System.out.println(t);
                }
            }
        }
        
    }
    
}
