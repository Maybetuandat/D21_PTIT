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
public class J01018 {
    public static void xuli(String s){
        int sum = 0;
        for(int i=0; i<s.length() - 1; i++){
            sum += s.charAt(i) - '0';
            if(Math.abs(s.charAt(i) - s.charAt(i+1)) != 2){
                System.out.println("NO");
                return;
            }
        }
        sum += s.charAt(s.length() - 1) - '0';
        if(sum % 10 == 0){
            System.out.println("YES");
        }
        else
            System.out.println("NO");
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            xuli(s);
        }
    }
}
