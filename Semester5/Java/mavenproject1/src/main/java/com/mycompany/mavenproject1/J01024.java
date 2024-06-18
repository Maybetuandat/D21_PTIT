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
public class J01024 {
     public static void main(String[] args) {
         Scanner sc  = new Scanner(System.in);
         int t= sc.nextInt();
         while(t-- > 0){
             String s = sc.next();
             String ok = "YES";
             for(int i=0; i<s.length(); i++){
                 if(s.charAt(i) != '0' && s.charAt(i) != '1' && s.charAt(i) != '2')
                 {
                     ok = "NO";
                    
                     break;
                 }
             }
             System.out.println(ok);
         }
    }
}
