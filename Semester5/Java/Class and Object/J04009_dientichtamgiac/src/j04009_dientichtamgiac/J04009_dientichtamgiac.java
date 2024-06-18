/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j04009_dientichtamgiac;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J04009_dientichtamgiac {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            Triangle a = new Triangle(new Point(sc.nextDouble(), sc.nextDouble()),new Point(sc.nextDouble(), sc.nextDouble()),new Point(sc.nextDouble(), sc.nextDouble()));
            System.out.println(a);
        }
    }
    
}
