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
public class J02022 {
    public static int [] vs = new int[50];
    public static int [] a = new int[50];
  
    public static Scanner sc = new Scanner(System.in);
    public static void check(int n)
    {
        for(int j=2; j<=n; j++)
          if(Math.abs(a[j] - a[j-1]) == 1)
              return;
        for(int j=1; j<=n; j++)
            System.out.print(a[j]);
        System.out.println();    
        
    }
    public static void  dq(int i, int n){
        for(int j = 1; j<=n; j++)
        {
            if(vs[j] == 0)
            {
                a[i] = j;
                vs[j] = 1;
                if(i == n)
                    check(n);
                else
                  dq(i+1, n);
                vs[j] = 0;
            }
        }
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        while(t-- > 0){
             int n = sc.nextInt();
            for(int i=1; i<=n; i++)
                vs[i] = 0;
            dq(1, n);
            System.out.println();
        }
    }
}
