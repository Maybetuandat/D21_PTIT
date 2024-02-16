/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04001_khoi_tao_lop_point;
import java.util.Scanner;

/**
 *
 * @author Dell Gaming
 */
public class Main {
      public static void main(String[] args) {
           Scanner sc = new Scanner(System.in);
           int t = sc.nextInt();
           while(t-- > 0){
               double x = sc.nextDouble();
               double y = sc.nextDouble();
               Point a = new Point(x, y);
               Point b = new Point(sc.nextDouble(), sc.nextDouble());
               System.out.printf("%.4f", a.distance(b));
               System.out.println("");
           }
    }
}
