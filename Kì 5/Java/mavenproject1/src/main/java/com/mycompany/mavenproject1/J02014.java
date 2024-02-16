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
public class J02014 {
    public static Scanner sc = new Scanner(System.in);
    public static void  xuli()
    {
        int n = sc.nextInt();
        long [] f = new long [n+1];
        f[0] = 0;
        for(int i=1; i<=n; i++){
            int x = sc.nextInt();
            f[i] = f[i-1] + x;
        }
        for(int i=1; i<=n; i++){
            if(f[i-1] == f[n] - f[i])
            {
                System.out.println(i);
                return;
            }
        }
        System.out.println("-1");
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        while(t-- > 0){
            xuli();
        }
    }
}
