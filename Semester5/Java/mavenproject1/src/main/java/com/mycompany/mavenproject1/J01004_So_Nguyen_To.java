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
public class J01004_So_Nguyen_To {
    public  static String  snt(long n) {
        if(n <= 1)
            return "NO";
        for(int i=2; i<= Math.sqrt(n); i++)
            if(n % i  == 0)
                  return "NO";
        return "YES";
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            System.out.println(snt(n));
        }
    }
}
