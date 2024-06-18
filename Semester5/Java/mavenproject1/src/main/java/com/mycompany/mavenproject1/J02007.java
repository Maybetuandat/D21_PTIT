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
public class J02007 {
    public static  Scanner sc = new Scanner(System.in);
    public static void xuli(){
        int n = sc.nextInt();
        int [] a = new int[n];
        int [] dem = new int[100005];
        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
            dem[a[i]]++;
        }
        for(int i=0; i<n; i++){
            if(dem[a[i]] != 0)
            {
                System.out.println(a[i]+ " xuat hien "+ dem[a[i]]+" lan");
                dem[a[i]]= 0;
            }
        }     
        
    }
    public static void main(String[] args) {
       
        int t = sc.nextInt();
        for(int i=1; i<=t; i++){
            System.out.println("Test " + i+ ":");
            xuli();
        }
    }
}
