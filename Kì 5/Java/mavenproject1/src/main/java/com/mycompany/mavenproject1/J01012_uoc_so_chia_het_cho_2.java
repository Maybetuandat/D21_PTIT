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
public class J01012_uoc_so_chia_het_cho_2 {
    public static void xuli(long n){
        long dem = 0;
        for(int i=1; i<= Math.sqrt(n); i++){
            if(n % i  == 0){
                long k = n / i;
            if(i != k){
                if(i % 2 == 0)
                    dem++;
                if(k % 2 == 0)
                     dem++;
            }
            else{
                
                if(k % 2 == 0)
                     dem++;
            }
            }
        }
        System.out.println(dem);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            xuli(n);
    }
 }
}