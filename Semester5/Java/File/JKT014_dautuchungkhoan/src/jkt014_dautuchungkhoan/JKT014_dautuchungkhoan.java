/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package jkt014_dautuchungkhoan;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class JKT014_dautuchungkhoan {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int [] a = new int[n];
            for(int i=0; i<n; i++)
                a[i] = sc.nextInt();
            Stack<Integer> st = new Stack<>();
            st.push(0);
            ArrayList<Integer> ans  = new ArrayList<>();
            ans.add(1);
            for(int i=1; i<n; i++)
            {
                while(!st.empty() && a[st.peek()] <= a[i]  )
                      st.pop();
                if(st.empty())
                    ans.add(i + 1 );
                else
                   ans.add(i - st.peek() );
                st.push(i);
            }
            for(int x : ans)
            {
                System.out.print(x + " ");
            }
            System.out.println("");
        }
    }
    
}
