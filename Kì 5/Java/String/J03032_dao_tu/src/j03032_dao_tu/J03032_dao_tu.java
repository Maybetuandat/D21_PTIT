/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03032_dao_tu;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J03032_dao_tu {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String s = sc.nextLine();
            String [] adu = s.split("\\s+");
            for(String x : adu){
                System.out.print(new StringBuilder(x).reverse().toString() + " ");
            }
            System.out.println("");
        }
    }
    
}
