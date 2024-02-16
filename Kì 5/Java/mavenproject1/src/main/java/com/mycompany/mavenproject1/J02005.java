/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

import java.util.Scanner;
import java.util.TreeSet;

/**
 *
 * @author Dell Gaming
 */
public class J02005 {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int n =sc.nextInt(), m = sc.nextInt();
            TreeSet<Integer> set1 = new TreeSet<Integer>();
            TreeSet<Integer> set2 = new TreeSet<Integer>();
            for(int i=0; i<n; i++)
            {
                int x = sc.nextInt();
                set1.add(x);
            }
            for(int i=0; i<m; i++)
            {
                int x = sc.nextInt();
                set2.add(x);
            }
            for(int x : set1){
                if(set2.contains(x) == true)
                    System.out.print(x + " ");
            }
    }
}
