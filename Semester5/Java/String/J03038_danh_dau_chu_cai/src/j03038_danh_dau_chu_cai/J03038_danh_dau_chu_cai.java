/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03038_danh_dau_chu_cai;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03038_danh_dau_chu_cai {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        HashSet<String> s1 = new HashSet<>();
        for(int i=0; i<s.length(); i++){
            s1.add(String.valueOf(s.charAt(i)));
        }
        System.out.println(s1.size());
    }
    
}
