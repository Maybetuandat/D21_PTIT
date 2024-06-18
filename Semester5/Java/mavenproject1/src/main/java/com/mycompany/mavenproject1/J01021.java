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
public class J01021 {
      public static final int Nmax = (int) 1e9 + 7;
      public static long power(long a, long b){
          
          if(b == 0)
              return 1;
          if(b == 1)
              return a % Nmax;
          long x = power(a, b / 2);
          if(b % 2 == 0)
              return (  x * x ) % Nmax;
          return (((x *x ) % Nmax )* a ) % Nmax;
          
      }
      public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          
          while(true){
              long a = sc.nextLong();
              long b = sc.nextLong();
              if(a == 0 && b == 0)
                  break;
              System.out.println(power(a, b));
          }
    }
}
