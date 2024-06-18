/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03027;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03027 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        Stack<Integer> st = new Stack<>();
        String s = sc.next();
        for(int i=0; i<s.length(); i++){
            if(st.empty())
                st.push(i);
            else
            {
                if(s.charAt(i) == s.charAt(st.peek()))
                    st.pop();
                else
                {
                    st.push(i);
                }
            }
        }
        if(st.empty()){
            System.out.println("Empty String");
        }
        else
        {
            StringBuilder s1 = new StringBuilder();
            while(!st.empty()){
                s1 = s1.append(s.charAt(st.pop()));
            }
            System.out.println(s1.reverse().toString());
        }
    }
    
}
