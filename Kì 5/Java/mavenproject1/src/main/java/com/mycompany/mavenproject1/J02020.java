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
public class J02020 {
    public static int a[] = new int [25];
    public static int n, k, dem = 0;
    public static void dq(int i){
        for(int j = a[i-1] + 1; j <= n - k + i; j++){
            a[i] =j;
            if(i == k)
            {
                dem++;
                for(int t = 1; t<=k; t++)
                    System.out.print(a[t] + " ");
                System.out.println("");   
         
            }
            else
            {
                dq(i+1);
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         n = sc.nextInt();
         k = sc.nextInt();
        a[0] = 0;
        dq(1);
        System.out.printf("Tong cong co %d to hop", dem);
    }
}
