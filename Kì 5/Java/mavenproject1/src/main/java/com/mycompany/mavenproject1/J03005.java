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
public class J03005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0)
        {
            String s = sc.nextLine().trim();
            String []ans = s.toLowerCase().split("\\s+");
            String s1 = ans[0];
            String cmp = "";
            int n = ans.length;
            for(int i=1; i<n; i++)
                 cmp = cmp + ans[i].substring(0, 1).toUpperCase() + ans[i].substring(1) + " ";
            cmp= cmp.trim();
            cmp = cmp + ", " + s1.toUpperCase();
            System.out.println(cmp);
            
        }
    }
}
