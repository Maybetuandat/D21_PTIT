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
public class J03006 {
    public static Scanner sc = new Scanner(System.in);
    
    public static void xuli(String s)
    {
        int n = s.length();
            for(int i=0; i<n/2; i++)
            {
                if( ((s.charAt(i) - '0') % 2 != 0 ) || ((s.charAt(n - i - 1) - '0') % 2 != 0))
                {
                    System.out.println("NO");
                    return;
                }
                if(s.charAt(i) != s.charAt(n - i - 1))
                {
                    System.out.println("NO");
                    return;
                }
            }
        System.out.println("YES");
    }
    public static void main(String[] args) {
        int t = sc.nextInt();
        while(t-- > 0)
        {
            String str = sc.next();
            xuli(str);
        }
    }
}
