/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j08012_hinhsao;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */

public class J08012_hinhsao {

    /**
     * @param args the command line arguments
     */
    public static void testcase()
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] dem = new int[n + 1];
        for(int i=0; i<n-1; i++)
        {
            int x  = sc.nextInt();
            int y = sc.nextInt();
            dem[x]++;
            dem[y]++;
        }
     
        for(int i=0; i<= n; i++)
        {
            if(dem[i] == n-1)
            {
                System.out.println("Yes");
                return;
            }
        }
        System.out.println("No");
    }
    public static void main(String[] args) {
        testcase();
    }
    
}
