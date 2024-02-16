/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j04002_khaibaolophcn;

import java.util.Scanner;



/**
 *
 * @author Dell Gaming
 */
public class J04002_KhaiBaoLopHcn {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
          Scanner sc= new Scanner(System.in);
          int a = sc.nextInt();
          int b = sc.nextInt();
          if( a <= 0 || b <= 0){
              System.out.println("INVALID");
          }
          else
          {
              String color = sc.next();
              int maxx = Math.max(a, b);
              int minn = Math.min(a, b);
              Rectange hcn = new Rectange(minn, maxx, color);
              System.out.println(hcn);
          }
    }
    
}
