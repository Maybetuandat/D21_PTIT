/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package code;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class bai5 {
        public static boolean check(char ch)
        {
            if(ch == '[' || ch == '('  )
                return true;
            return false;
        }
        public static int cnt(String s)
        {
            int dem = 0;
            for(int i=0; i<s.length(); i++)
            {
                if(s.charAt(i) == '[')
                    dem++;
            }
            return dem;
        }
      public static void main(String[] args) {
           Scanner sc= new Scanner(System.in);
           String s = sc.next();
           Stack<Integer> st = new Stack<>();
           for(int i=0; i<s.length(); i++)
           {
               if(check(s.charAt(i)) || st.empty()   )
               {
                   st.push(i);
               }
               else
               {
                   if(s.charAt(i) == ')')
                   {
                       if(!st.empty() && s.charAt(st.peek()) == '(')
                       {
                           st.pop();
                       }
                       else
                       {
                           st.push(i);
                       }
                   }
                   else
                   {
                       if(s.charAt(i) == ']')
                       {
                           if(!st.empty() && s.charAt(st.peek()) == '[')
                           {
                               st.pop();
                                       
                           }
                           else
                           {
                               st.push(i);
                           }
                       }
                   }
               }
           }
           ArrayList<Integer> ds = new ArrayList<>();
           while(!st.empty())
           {
               ds.add(st.peek());
               st.pop();
           }
           if(ds.size() == 0)
           {
               System.out.println(cnt(s));
           }
           else
           {
                Collections.reverse(ds);
          if(ds.get(0) != 0)
          {
              ds.add(0, -1);
          }
          if(ds.get(ds.size() - 1) != s.length() - 1)
          {
              ds.add(s.length());
          }
          int maxx = 0;
          for(int i=0; i<ds.size() - 1; i++)
          {
             
              maxx = Math.max(maxx, cnt(s.substring(ds.get(i) + 1, ds.get(i+1))));
          }
          System.out.println(maxx);
           }
         
    }
}
