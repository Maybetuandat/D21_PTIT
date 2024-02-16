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
public class J02008 {
    public static Scanner sc = new Scanner(System.in);
    public static long gcd(long a, long  b){
        long du = 0;
        while(b != 0){
            du = a % b;
            a = b;
            b = du;
        }
        return a;
    }
    public static long lcm(long a, long b){
            return (a * b) / gcd(a, b);
    }
    public static void  xuli(){
        long n = sc.nextLong();
        long ans = 1;
        for(long  i = 2; i<=n; i++)
            ans = lcm(ans, i);
        System.out.println(ans);
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        while(t-- > 0){
            xuli();
        }
    }
}
