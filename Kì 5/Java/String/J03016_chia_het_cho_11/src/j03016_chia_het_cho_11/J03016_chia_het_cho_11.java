/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03016_chia_het_cho_11;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03016_chia_het_cho_11 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            BigInteger a = sc.nextBigInteger();
            BigInteger [] adu = a.divideAndRemainder(new BigInteger("11"));
            BigInteger check = new BigInteger("0");
            if(adu[1].compareTo(check) == 0){
                System.out.println("1");
            }
            else{
                System.out.println("0");
            }
            
        }
    }
    
}
