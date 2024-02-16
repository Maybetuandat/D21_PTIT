/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07032_sothuannghichtrongfile;

/**
 *
 * @author Dell Gaming
 */
public class test {
     public static boolean check(String s)
    {
        int n = s.length();
        if(n % 2 == 0)
            return false;
        if(n == 1)
            return false;
        for(int i=0; i<n / 2; i++)
        {
            int x =(int)( s.charAt(i) - '0');
            if(x % 2  == 0)
                  return false;
            if(s.charAt(i) != s.charAt(n - i - 1))
                return false;
        }
        return true;
    }
      public static void main(String[] args) {
          System.out.println(check("135797531"));
    }
}
