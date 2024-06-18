/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package xaunp;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Xaunp {

    /**
     * @param args the command line arguments
     */
    public static void inra(int a[], int n)
    {
        for(int i=1; i<=n; i++)
        {
            System.out.print(a[i]);
        }
        for(int i=n; i>=1; i--)
        {
            System.out.print(a[i]);
        }
        System.out.print(" ");
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int []a = new int[50];
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int index = 2;
            while(index <= n)
            {
                int dodai = index / 2;
                
                for(int i=1; i<= dodai; i++)
                    a[i] = 0;
                while(true)
                {
                    inra(a, dodai);
                    int i = dodai;
                    while(a[i] == 1 && i > 0)
                    {
                        a[i] = 0;
                        i--;
                    }
                    if(i == 0)
                        break;
                    a[i]++;
                    
                }
                index += 2;
            }
            System.out.println("");
        }
    }
    
}
