/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Dell Gaming
 */
public class nhonhatvalonnhat {
      public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
          while(true){
              int n = sc.nextInt();
              if(n == 0)
                    break;
              BigInteger minn = null;
              BigInteger maxx = null;
              BigInteger x = sc.nextBigInteger();
              minn = x;
              maxx = x;
              for(int i=1; i<n; i++){
                   x =  sc.nextBigInteger();
                  if(x.compareTo(minn) == -1)
                      minn = x;
                  if(x.compareTo(maxx) == 1)
                      maxx = x;
              }
              if(minn == maxx)
                  System.out.println("BANG NHAU");
              else
                  System.out.println(minn + " "+ maxx);
          }
    }
}
