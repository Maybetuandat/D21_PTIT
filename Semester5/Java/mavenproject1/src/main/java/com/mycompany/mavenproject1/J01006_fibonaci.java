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
public class J01006_fibonaci {
    public static void main(String[] args) {
        long [] fi = new long[100];
        fi[1] = 1;
        fi[2] = 1;
        for(int i=3; i<=92; i++)
            fi[i] = fi[i-1] + fi[i-2];
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            System.out.println(fi[n]);
        }
    }
}
