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
public class J03007 {
    public static Scanner sc = new Scanner(System.in);
    public static void xuli()
    {
        String s = sc.next();
        if(s.charAt(0) != '8' || s.charAt(s.length() - 1) != '8')
        {
            System.out.println("NO");
            return ;
        }
        int sum = 0;
        for(int i=0; i<s.length(); i++)
            sum += (s.charAt(i ) - '0');
        if(sum % 10 == 0)
        {
            System.out.println("YES");
        }
        else
        {
            System.out.println("NO");
        }
    }
    public static void main(String[] args) {
            int t = sc.nextInt();
            while(t-- > 0)
            {
                xuli();
            }
    }
}
