/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j08022_phantudautienbenphailonhon;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J08022_phantudautienbenphailonhon {

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
            int []a = new int[n];
            for(int i=0; i<n; i++)
                a[i] = sc.nextInt();
            Stack<Integer> st = new Stack<>();
            ArrayList<Integer> ans = new ArrayList<>();
            for(int i=n-1; i>= 0; i--)
            {
                while(!st.empty() &&  a[i] >= a[st.peek()])
                    st.pop();
                if(st.empty())
                {
                    ans.add(-1);
                }
                else
                {
                    ans.add(a[st.peek()]);
                }
                st.push(i);
                    
            }
            for(int i = ans.size() - 1; i>=0; i--)
            {
                System.out.print(ans.get(i) + " ");
            }
            System.out.println("");
        }
    }
    
}
