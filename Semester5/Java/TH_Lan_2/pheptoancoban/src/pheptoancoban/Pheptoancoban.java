/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pheptoancoban;
import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Pheptoancoban {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("DAYSO.in"));
        int t = Integer.parseInt(sc.nextLine());
        
        t--;
        String cmp = sc.nextLine();
        BigInteger sum = new BigInteger(cmp);
        BigInteger maxx = new BigInteger(cmp);
        BigInteger minn = new BigInteger(cmp);
        while(t-- > 0)
        {
            cmp = sc.nextLine();
            BigInteger adu = new BigInteger(cmp);
            sum = sum.add(adu);
            maxx = maxx.max(adu);
            minn = minn.min(adu);
        }
        System.out.println(minn);
        System.out.println(maxx);
        System.out.println(sum);
    }
    
}
