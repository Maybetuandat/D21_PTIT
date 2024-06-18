/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j08015_capsocotongbangk;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J08015_capsocotongbangk {

    /**
     * @param args the command line arguments
     */
    public static Scanner sc = new Scanner(System.in);
    public static void xuli()
    {
        int    n = sc.nextInt();
        long  k = sc.nextLong();
        long  []a  = new long [n];
        for(int i=0; i<n; i++)
            a[i] = sc.nextLong();
        Arrays.sort(a);
        long  ans = 0;
        for(int i=0; i<n; i++)
        {
            long   x = k - a[i];
            int  up = upperbound (a, i + 1,n - 1, x);
            int   down = lowbound(a, i + 1, n - 1, x);
            if(up <= n-1 && down <= n -1 )
            {
                ans += (up - down + 1);
            }
            
        }
        System.out.println(ans);
    }
    public static int    lowbound(long  a[], int begin, int end, long  key)
    {
        int   ans = end + 1;
           while(begin <= end)
           {
               int mid = (begin + end) / 2;
               if(a[mid] == key)
               {
                   ans = mid;
                   end = mid - 1;
               }
               else if(a[mid] > key)
               {
                   end = mid - 1;
               }
               else
               {
                   begin = mid + 1;
               }
           }
           return ans;
    }
     public static int  upperbound(long  a[], int begin, int end, long  key)
    {
        int ans = end + 1;
           while(begin <= end)
           {
               int mid = (begin + end) / 2;
               if(a[mid] == key)
               {
                   ans = mid;
                   begin = mid + 1;
               }
               else if(a[mid] > key)
               {
                   end = mid - 1;
               }
               else
               {
                   begin = mid + 1;
               }
           }
           return ans;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        int t = sc.nextInt();
        while(t-- > 0)
        {
            xuli();
        }
        
    }
    
}
