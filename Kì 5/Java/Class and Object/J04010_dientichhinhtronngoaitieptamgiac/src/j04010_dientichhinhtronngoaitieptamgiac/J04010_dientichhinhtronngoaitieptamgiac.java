/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j04010_dientichhinhtronngoaitieptamgiac;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J04010_dientichhinhtronngoaitieptamgiac {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            Point a = new Point(sc.nextDouble(), sc.nextDouble());
            Point b = new Point(sc.nextDouble(), sc.nextDouble());
            Point c = new Point(sc.nextDouble(), sc.nextDouble());
            double kc1 = a.distance(b);
            double kc2 = b.distance(c);
            double kc3 = c.distance(a);
            if(kc1 + kc2 <= kc3 || kc2 + kc3 <= kc1 || kc1 + kc3 <= kc2)
            {
                System.out.println("INVALID");
                continue;
            }
            double s = 0.25 * Math.sqrt((kc1 + kc2 + kc3 ) * (kc1 + kc2 - kc3) * (kc2 + kc3 - kc1) * (kc1 + kc3 - kc2));
            double r = (kc1 * kc2 * kc3) / (4 * s);
            System.out.println(String.format("%.3f", Math.PI * r * r));
            
        }
    }
    
}
