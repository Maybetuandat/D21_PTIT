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
public class J02010 {
        public static Scanner sc = new Scanner(System.in);
        public static void main(String[] args) {
            int n = sc.nextInt();
            int []a = new int[n];
            for(int i=0; i<n; i++)
                a[i] = sc.nextInt();
            for(int i=0; i<n; i++){
                int ok = 1;
                for(int j=i+1; j<n; j++)
                {
                    if(a[j] < a[i])
                    {
                        ok = 0;
                        int tmp = a[i];
                        a[i] = a[j];
                        a[j] = tmp;
                    }
                }
                if(ok == 0){
                    System.out.printf("Buoc %d: ", i+1);
                for(int x : a)
                {
                    System.out.print(x + " ");
                }
                System.out.println();
                }
            }
    }
}
