/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03024_so_uu_the;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03024_so_uu_the {

    /**
     * @param ch
     * @param args the command line arguments
     * @return 
     */
    public static boolean check(char ch){
        return ch >= '0' && ch <= '9';
    }
    public static String xuli(String s){
        if(s.charAt(0) == '0'){
            
            return "INVALID";
        }
        int demchan = 0, demle = 0;
        for (int i=0; i<s.length(); i++){
            if(!check(s.charAt(i))){
                
                return "INVALID";
            }
            if((s.charAt(i) - '0') % 2 == 0){
                demchan++;
            }
            else{
                demle++;
            }
            
        }
        if(s.length() % 2 == 0){
            if(demchan > demle)
                return "YES";
        }
        else{
            if(demle > demchan)
            {
                return "YES";
            }
        }
        return "NO";
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
