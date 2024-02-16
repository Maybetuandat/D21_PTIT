/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j02037_day_uu_the;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J02037_day_uu_the {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            int demchan = 0, demle = 0;
            String [] a = sc.nextLine().split("\\s++");
            for(String x : a){
                if(Integer.parseInt(x) % 2 == 0){
                    demchan++;
                }
                else
                      demle++;
            }
            if(a.length % 2 == 0)
            {
                if(demchan > demle)
                {
                    System.out.println("YES");
                }
                else
                {
                    System.out.println("NO");
                }
            }
            else
            {
                if(demle > demchan)
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
    
}
