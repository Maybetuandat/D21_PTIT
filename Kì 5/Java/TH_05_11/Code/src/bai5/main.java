/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai5;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class main {
        public static Scanner sc = new Scanner(System.in);
        public static boolean check(String cmp)
        {
            return Character.isDigit(cmp.charAt(cmp.length() - 1));
        }
        public static long Calculator(long a, long b, String s)
        {
            if(s.compareTo("-") == 0)
            {
                return a - b;
            }
            if(s.compareTo("+") == 0)
            {
                return a + b;
            }
            if(s.compareTo("*") == 0)
            {
                return a * b;
            }
            return a / b;
        }
        public static void xuli()
        {
            int n = Integer.parseInt(sc.nextLine());
            Stack<Long> st1 = new Stack<>();
           
            String []s = sc.nextLine().trim().split("\\s+");
            for(int i = s.length - 1; i>=0; i--)
            {
                if(check(s[i]))
                {
                    st1.push(Long.valueOf(s[i]));
                }
                else
                {
                     long adu1 = st1.peek(); st1.pop();
                     long adu2 = st1.peek(); st1.pop();
                     long adu = Calculator(adu1, adu2, s[i]);
                     st1.push(adu);
                }
            }
            System.out.println(st1.peek());
        }
        public static void main(String[] args) {
            
            int t = Integer.parseInt(sc.nextLine());
            while(t--  > 0)
            {
                xuli();
            }
    }
}
