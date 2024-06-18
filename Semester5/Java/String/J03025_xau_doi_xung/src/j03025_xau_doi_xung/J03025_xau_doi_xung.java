/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03025_xau_doi_xung;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03025_xau_doi_xung {

    /**
     * @param args the command line arguments
     */
    public static String xuli(String s){
          
            int dem = 0;
            for(int i=0; i<s.length() / 2; i++ ){
                if(s.charAt(i) != s.charAt(s.length() - i - 1))
                      dem++;
            }
            if(s.length() % 2 == 1 && dem == 0)
                return "YES";
            if(dem == 1){
                return "YES";
            }
            return "NO";
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            System.out.println((xuli(sc.next())));
            
        }
    }
    
}
