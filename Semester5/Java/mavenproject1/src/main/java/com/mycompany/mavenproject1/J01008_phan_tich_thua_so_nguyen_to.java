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
public class J01008_phan_tich_thua_so_nguyen_to {
    public static Boolean snt(long n){
        if(n <= 1)
            return false;
        for(int i=2; i<= Math.sqrt(n); i++){
            if(n % i == 0)
                return false;
        }
        return true;
    }
    public static void xuli(long n){
        if(snt(n)){
            System.out.println(n+"(1)");
            return;
        }
        long  i=2;
        while(i <= n){
            int dem = 0;
            while(n % i  == 0){
                dem++;
                n /= i;
            }
            if(dem != 0)
                System.out.print(i + "(" + dem+ ") ");
            i++;
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
       for(int i=1; i<=t; i++)
       {
            long n = sc.nextLong();
            System.out.print("Test " + i + ": ");
            xuli(n);
        }
    }
}
