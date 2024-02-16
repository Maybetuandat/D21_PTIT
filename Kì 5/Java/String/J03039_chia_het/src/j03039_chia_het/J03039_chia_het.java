/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03039_chia_het;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03039_chia_het {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            BigInteger check = new BigInteger("0");
            BigInteger maxx = a.max(b);
            BigInteger minn = a.min(b);
            BigInteger [] ans  = maxx.divideAndRemainder(minn);
            if(ans[1].equals(check) == true)
            {
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
    
}
