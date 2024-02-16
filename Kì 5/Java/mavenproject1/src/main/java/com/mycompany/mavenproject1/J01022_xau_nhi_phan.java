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
public class J01022_xau_nhi_phan {
    public static long []a = new long [100];
    public static void init(){
        a[1] = 1;
        a[2] = 1;
        for(int  i=3; i<93; i++){
            a[i] = a[i-1] + a[i-2];
        }
    }
    public static String xuli(int   n, long k){
        if(n == 1)
            return "0";
        if(n == 2)
              return "1";
        
        if(k > a[n-2])
            return xuli( n -1, k - a[n-2]);
        return xuli(n-2, k);
    }
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         init();
         int t = sc.nextInt();
         while(t-- > 0){
             int   n = sc.nextInt();
             long k = sc.nextLong();
             System.out.println(xuli(n, k));
         }
    }
}
