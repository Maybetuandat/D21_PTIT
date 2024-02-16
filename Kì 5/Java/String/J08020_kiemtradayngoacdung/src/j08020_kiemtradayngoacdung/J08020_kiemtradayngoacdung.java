/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j08020_kiemtradayngoacdung;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J08020_kiemtradayngoacdung {

    /**
     * @param args the command line arguments
     */
    public static boolean check(char ch)
    {
        if(ch == '[' || ch == '(' || ch == '{')
            return true;
        return false;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            String s = sc.next();
            int n = s.length();
            Stack<Integer> st = new Stack<>();
            for(int i=0; i<n; i++)
            {
                if(check(s.charAt(i)))
                {
                    st.push(i);
                }
                else
                {
                    if(st.empty())
                    {
                        st.push(i);
                        continue;
                    }
                        
                    if(s.charAt(i) == ']')
                    {
                        int top = st.peek();
                        if(s.charAt(top) == '[')
                            st.pop();
                        else
                            st.push(i);
                    }
                    if(s.charAt(i) == ')')
                    {
                        int top = st.peek();
                        if(s.charAt(top) == '(')
                            st.pop();
                        else
                            st.push(i);
                    }
                    if(s.charAt(i) == '}')
                    {
                        int top = st.peek();
                        if(s.charAt(top) == '{')
                            st.pop();
                        else
                            st.push(i);
                    }
                }
            }
             
            if(st.empty())
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
        }
    }
    
}
