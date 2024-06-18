/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package hcndonsasc;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Hcndonsasc {

    /**
     * @param args the command line arguments
     */
    public static long res = Long.MIN_VALUE;
    
    public static long solve(int a[], int n)
    {
        long ans = 0;
        long l[] = new long [n];
        long r[] = new long [n];
        Stack<Integer> st = new Stack<>();
        for(int i=0; i<n; i++)
        {
            while(!st.empty() && a[i] <= a[st.peek()])
            {
                st.pop();
            }
            if(st.empty())
            {
                l[i] = -1;
            }
            else
            {
                l[i] = st.peek();
            }
            st.push(i);
        }
        st.clear();
        for(int i = n-1; i >= 0; i--)
        {
            while(!st.empty() && a[i] <= a[st.peek()])
            {
                st.pop();
            }
            if(st.empty())
            {
                r[i] = n;
            }
            else
            {
                r[i] = st.peek();
            }
            st.push(i);
        }
        for(int i=0; i<n; i++)
        {
            ans = Math.max(ans,(long) ((r[i] - l[i] - 1) * a[i]));
        }
        return ans;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a[]  = new int[m];
        int b[] = new int [m];
        for(int i=0; i<m; i++)
        {
            int tmp = sc.nextInt();
            a[i] = tmp;
            b[i] = n - a[i];
        }
        res = Math.max(solve(a, m) , solve(b, m));
        System.out.println(res);
        
    }
    
}
