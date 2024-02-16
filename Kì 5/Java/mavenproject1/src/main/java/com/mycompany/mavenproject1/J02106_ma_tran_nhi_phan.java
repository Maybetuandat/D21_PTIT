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
public class J02106_ma_tran_nhi_phan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [][]a = new int[n][3];
        int dem  = 0;
        for (int i=0; i<n; i++)
        {
            int dem1 = 0;
            int dem0 = 0;
            for(int j=0; j<3; j++)
            {
                 a[i][j] = sc.nextInt();
                 if(a[i][j] == 0)
                     dem0++;
                 else
                     dem1++;
            }
            if(dem1 > dem0)
                dem++;
               
        }
        System.out.println(dem);
    }
}
