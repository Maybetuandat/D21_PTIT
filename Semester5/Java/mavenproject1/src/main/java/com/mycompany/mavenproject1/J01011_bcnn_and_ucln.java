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
public class J01011_bcnn_and_ucln {
    public static long ucln(long a, long b){
        long du = 0;
        while(b != 0){
            du = a % b;
            a = b;
            b = du;
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long a = sc.nextLong();
            long b = sc.nextLong();
            long x = ucln(a, b);
            System.out.println(a * b / x + " "+ x);
        }
    }
}
