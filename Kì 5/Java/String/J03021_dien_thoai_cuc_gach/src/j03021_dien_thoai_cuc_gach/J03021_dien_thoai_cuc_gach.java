/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03021_dien_thoai_cuc_gach;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03021_dien_thoai_cuc_gach {

    /**
     * @param args the command line arguments
     */
    public static char change(char ch){
        if (ch == 'a' || ch == 'b' || ch == 'c')
            return '2';
        if (ch == 'd' || ch == 'e' || ch == 'f')
            return '3';
        if (ch == 'g' || ch == 'h' || ch == 'i')
            return '4';
        if (ch == 'j' || ch == 'k' || ch == 'l')
            return '5';
        if (ch == 'm' || ch == 'n' || ch == 'o')
            return '6';
        if (ch == 'p' || ch == 'q' || ch == 'r' || ch == 's')
            return '7';
        if (ch == 't' || ch == 'u' || ch == 'v')
            return '8';
        if (ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z')
            return '9';
        return '1';
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc  = new Scanner(System.in);
        int t = sc.nextInt();    
        while(t-- > 0){
            String s = sc.next().toLowerCase();
            String cmp = "";
            for (int i=0; i<s.length(); i++)
                cmp += change(s.charAt(i));
            if(cmp.equals(new  StringBuffer(cmp).reverse().toString()) == true)
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
