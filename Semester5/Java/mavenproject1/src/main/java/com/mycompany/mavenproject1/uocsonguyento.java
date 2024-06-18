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
public class uocsonguyento {
    public static boolean isprime(long n){
        if(n <= 1)
            return false;
        for(int i=2; i * i <= n; i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            
            {
                long maxx = 0;
                for(int i=2; i<= Math.sqrt(n); i++){
                    while(n % i == 0)
                    {
                          n = n /i;
                          maxx = Math.max(maxx, i);
                    }
                      
                }
                maxx = Math.max(n, maxx);
                System.out.println(maxx);
            }
            
        }
    }
}
