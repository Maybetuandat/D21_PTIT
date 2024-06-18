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
import java.util.Stack;
public class J02017 {
    public static void main(String[] args) {
        Scanner  sc = new Scanner(System.in);
        Stack<Integer> st1 = new Stack<>();
        int n = sc.nextInt();
        int [] a = new int[n];
 
        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
            if(st1.empty())
                st1.push(a[i]);
            else
            {
                if( (st1.peek() + a[i]) % 2 == 0 )
                {
                     if( st1.empty() == false)
                        st1.pop();
                }
                else
                        st1.push(a[i]);
            }
                 
        }
        System.out.println(st1.size());
 }
}
