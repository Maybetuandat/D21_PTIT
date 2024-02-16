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
public class J01013 {
     static long []f = new long  [2000009];
    public static long cal(int n){
        if(f[n] == 0){
            return n;
        }
        int i = 2;
        long sum = 0;
        while(i <= n){
            
                while(n % i == 0){
                  sum += i;
                  n = n / i;
                }
                if(f[n] == 0){
                    sum += n;
                    break;
                }
            i++;
        }
        return sum;
    }
    public static void main(String[] args) {
       f[1]=1;
        for(int i=2; i * i <= 2000000; i++){
            if(f[i] == 0){
                for(int j=2; j<= 2000000 / i; j++){
                    f[i * j] = 1;
                }
            }
        }
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long sum = 0;
        while(t-- > 0){
            int n = sc.nextInt();
            sum += cal(n);
        }
        System.out.println(sum);
    }
}
