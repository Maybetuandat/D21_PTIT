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
public class J03008 {
    public static boolean isInverseNum(String s) {
        int l = s.length();
        for (int i = 0; i < l / 2; i++) {
            if (s.charAt(i) != s.charAt(l - i - 1)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int T = ip.nextInt();
        while (T-- > 0) {
            String s = ip.next();
            System.out.println(s.matches("[^014689]+") && isInverseNum(s) ? "YES" : "NO");
        }
    }
}
