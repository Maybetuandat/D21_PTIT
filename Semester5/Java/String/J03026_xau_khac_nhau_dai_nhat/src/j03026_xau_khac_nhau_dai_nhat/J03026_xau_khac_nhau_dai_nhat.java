/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03026_xau_khac_nhau_dai_nhat;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03026_xau_khac_nhau_dai_nhat {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String a = sc.next();
            String b = sc.next();
            if( a.compareTo(b) == 0){
                System.out.println("-1");
            }
            else
            {
                System.out.println(Math.max(a.length(), b.length()));
            }
        }
    }
    
}
