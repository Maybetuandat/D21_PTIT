/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03013_hieu_so_nguyen_lon;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03013_Hieu_So_Nguyen_Lon {

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
                    while(a.length() != b.length())
                    {
                        while(a.length() < b.length())
                            a = '0' + a;
                        while(b.length() < a.length())
                            b = '0' + b;
                    }
                    String maxx, minn;
                    if(a.compareTo(b) > 0)
                    {
                        maxx = a;
                        minn = b;
                    }
                    else if(a.compareTo(b) == 0){
                        System.out.println("0");
                        continue;
                    }
                    else{
                        maxx = b;
                        minn = a;
                    }
                 
                    int n = maxx.length();
                    String ans= "";
                    int nho = 0;
                    for(int i=n-1; i >= 0; i--){
                        int cs = (maxx.charAt(i) - '0') - (minn.charAt(i) - '0') - nho;
                       
                        nho = 0;
                        if(cs < 0)
                        {
                            cs += 10;
                            nho = 1;
                        }
                           
                        char ch = (char) (cs + '0');
                        ans = ch + ans;
                        
                    }
                    System.out.println(ans);
                    
        }
        
    }
    
}
