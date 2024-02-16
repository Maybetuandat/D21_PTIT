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
public class J01014_uoc_so_nguyen_to_lon_nhat {
    public static boolean isprime(long n){
        if(n <= 1)
            return false;
        for(int i=2; i<= Math.sqrt(n); i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
    public static void xuli(long n){
        if(isprime(n))
        {
            System.out.println(n);
            return;
        }
        long  i = 2;
        long maxx = 0;
        while(i <= n){
            if(n % i  == 0){
                maxx = Math.max(maxx, i);
                while(n % i == 0){
                    n = n / i;
                }
                if(isprime(n)){
                    maxx = Math.max(maxx, n);
                    break;
                }
            }
            i++;
            
        }
        System.out.println(maxx);
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
