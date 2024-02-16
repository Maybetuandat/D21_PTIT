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
public class J01007_kiem_tra_fibonaci {
    public static void main(String[] args) {
        long [] fi = new long[100];
        fi[0] = 0;
        fi[1] = 1;
        fi[2] = 1;
        for(int i=3; i<= 93; i++)
            fi[i] = fi[i-1] + fi[i-2];
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            int ok =0;
            for(int i=0; i<=93; i++){
                if(fi[i] == n){
                    System.out.println("YES");
                    ok = 1;
                    break;
                }
                    
                else if(fi[i] > n){
                    System.out.println("NO");
                    ok =1;
                    break;
                }
            }
            if(ok == 0)
                System.out.println("NO");
        }
    }
}