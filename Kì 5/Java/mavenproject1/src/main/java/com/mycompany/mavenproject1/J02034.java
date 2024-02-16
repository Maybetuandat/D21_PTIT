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
public class J02034 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []a = new int[1000];
        int maxx = 0;
        for(int i=0; i<n; i++)
        {
            int x = sc.nextInt();
            a[x]++;
            maxx = Math.max(maxx, x);
        }
        int ok = 0;
        for(int i=1; i<=maxx; i++)
        {
            if(a[i] == 0)
            {
                System.out.println(i);
                ok = 1;
            }
        }
        if(ok ==0)
        {
            System.out.println("Excellent!");
        }
    }
}
