/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

import java.util.ArrayList;
import java.util.Scanner;


/**
 *
 * @author Dell Gaming
 */
public class J02105 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int  n = sc.nextInt();
        ArrayList<Integer> [] g = new ArrayList[n+1];
        for (int i = 0; i <= n; i++) {
            g[i] = new ArrayList<>();
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                int x = sc.nextInt();
                if(x == 1)
                {
                    g[i].add(j);
                }
            }
        }
        for(int i=1; i<=n; i++)
        {
            System.out.printf("List(%d) = ", i);
            if(!g[i].isEmpty())
            {
                 for(int j : g[i])
             {
                 System.out.print(j + " ");
             }
            }
            
             System.out.println("");
        }
           
            
    }
}
