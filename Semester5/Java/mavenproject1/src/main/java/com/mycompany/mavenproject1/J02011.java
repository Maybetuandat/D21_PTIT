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
public class J02011 {
    public static Scanner sc = new Scanner(System.in);
        public static void main(String[] args) {
            int n = sc.nextInt();
            int []a = new int[n];
            for(int i=0; i<n; i++){
                a[i] = sc.nextInt();
                
            }
      
            for(int i=0; i<n-1; i++){
                int index = i;
                for(int j=i+1; j<n; j++){
                    if(a[j] < a[index]){
                        index = j;
                    }
                }
              
                    int tmp = a[index];
                    a[index] = a[i];
                    a[i] = tmp;
                    System.out.print("Buoc "+ (i + 1) +": ");
                  for(int j=0; j<n; j++)
                  {
                      System.out.print(a[j] + " ");
                  }
                    System.out.println();
                 
              
            }
    }
}
