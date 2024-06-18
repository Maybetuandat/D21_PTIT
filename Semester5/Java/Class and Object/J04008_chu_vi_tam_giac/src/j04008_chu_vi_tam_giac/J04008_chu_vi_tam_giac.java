/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j04008_chu_vi_tam_giac;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J04008_chu_vi_tam_giac {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            Point a = new Point(sc.nextDouble(), sc.nextDouble());
            Point b = new Point(sc.nextDouble(), sc.nextDouble());
            Point c = new Point(sc.nextDouble(), sc.nextDouble());
            double  canh1 = (double) a.distance(b);
            double canh2 = (double) b.distance(c);
            double canh3 = (double) a.distance(c);
            if(canh1 >= canh2 + canh3 || canh2 >= canh1 + canh3 || canh3 >= canh1 + canh2)
            {
                System.out.println("INVALID");
            }
            else
            {
               
                System.out.println(String.format("%.3f", canh1 + canh2 + canh3));
            }
        }
    }
    
}
