/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03040_bien_so_dep;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03040_bien_so_dep {

    /**
     * @param args the command line arguments
     */
    public static String xuli(String s)
    {
          String ans = "";
          for(int i=5; i<s.length(); i++)
              if(s.charAt(i) != '.')
                ans += s.charAt(i);
          int dem6 =0, dem8 = 0;
          char maxx = '0', minn = '9';
          for(int i=0; i<ans.length(); i++){
              if(ans.charAt(i) == '6')
                  dem6++;
              if(ans.charAt(i) == '8')
                  dem8++;
              if(ans.charAt(i) > maxx && ans.charAt(i) != '.')
                  maxx = ans.charAt(i);
              if(ans.charAt(i) < minn && ans.charAt(i)!= '.')
                  minn = ans.charAt(i);
          }
        if(maxx == minn)
              return "YES";
          if(dem6 + dem8 == ans.length() )
              return "YES";
          
          
          if(ans.charAt(0) == ans.charAt(1) && ans.charAt(1) == ans.charAt(2) && ans.charAt(3) == ans.charAt(4))
              return "YES";
          int ok = 0;
          for(int i=0; i<ans.length()-1; i++){
              
              if(ans.charAt(i) >= ans.charAt(i+1))
              {
                  ok = 1;
                  break;
              }
          }
          if(ok == 0)
              return "YES";
          return "NO" ;
          
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            System.out.println(xuli(sc.next()));
        }
        
    }
    
}
