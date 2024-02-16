/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

import java.util.Scanner;

/**
 *
 * @author Dell Gaming
 */
public class J01016_chu_so_4_va_7 {
      public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          String s = sc.nextLine();
          int dem = 0;
          for(int i=0; i<s.length(); i++){
              if(s.charAt(i) == '4' ||  s.charAt(i) == '7')
                  dem++;
          }
          if(dem == 4 || dem == 7)
              System.out.println("YES");
          else
              System.out.println("NO");
    }
}
