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
public class J020103 {
    public static Scanner  sc = new Scanner(System.in);
    public static void xuli()
    {
        int n = sc.nextInt();
        int m = sc.nextInt();
        long  [][] a = new long  [n][m];
        long  [][] cv_a = new long  [m][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                a[i][j] = sc.nextLong();
                cv_a[j][i] = a[i][j];
            }
            
        }
        long  [][] ans = new long  [n][n];
        for(int k=0; k<n; k++)
        {
              
              for(int i=0; i<n; i++)
                {
                   
                 for(int j=0; j<m; j++)
                 {
                    ans[i][k] += a[i][j] * cv_a[j][k];
                 }
               }
        }
       for(int k=0; k<n; k++)
       {
           for(int i=0; i<n; i++)
           {
               System.out.print(ans[k][i] + " ");
           }
           System.out.println("");
       }
            
    }
      public static void main(String[] args) {
          
          int t = sc.nextInt();
          for(int i=1; i<=t; i++)
          {
              System.out.printf("Test %d:", i);
              System.out.println("");
              xuli();
          }
    }
}
