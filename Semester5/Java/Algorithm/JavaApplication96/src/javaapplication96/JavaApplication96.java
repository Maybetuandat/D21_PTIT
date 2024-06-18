/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication96;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class JavaApplication96 {

    /**
     * @param args the command line arguments
     */
    public static void xuli(int n, int k)
    {
        if( n * 9 < k || k  == 0)
        {
            System.out.println("-1 -1");
            return;
        }
        int [] minn = new int[n];
        int [] maxx = new int[n];
        //tim min co so chu so la n va tong bang k
        int s = k - 1;
        minn[0] = 1;
        int t = n - 1;
        while(t > 0)
        {
            if(s >= 9)
            {
                s = s - 9;
                minn[t] = 9;
            }
            else
            {
               
                minn[t] = s; 
                 s= 0;
            }
            t--;
        }
        minn[0] += s;
        for(int x : minn)
        {
            System.out.print(x);
        }
        System.out.print(" ");
        //tim maxx co so chu so la n va tong bang k
        s = k;
        int i = 0;
        while(i < n)
        {
            if(s >= 9)
            {
                s = s - 9;
                maxx[i] = 9;
            }
            else
            {
                maxx[i] = s;
                s = 0;
                break;
            }
            i++;
        }
        for(int x : maxx)
        {
            System.out.print(x);
        }
        System.out.println("");
    }            
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        xuli(n, k);
    }
    
}
