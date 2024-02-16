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
public class J03004_chuan_hoa_ho_va_ten {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0)
        {
            String s = sc.nextLine();
            s = s.trim();
            String []a = s.toLowerCase().split("\\s+");
            for (String x : a)
            {
                String adu = x.substring(0, 1).toUpperCase() + x.substring(1);
                System.out.print(adu + " ");
            }
            System.out.println("");
        }
    }
}
