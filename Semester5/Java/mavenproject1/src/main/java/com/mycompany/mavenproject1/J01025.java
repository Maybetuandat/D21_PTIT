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
public class J01025 {
    public static int maxx(int a, int b, int c){
        int res = a;
        if(b > res)
             res = b;
        if(c > res)
             res = c;
        return res;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1,x2,x3,x4,y1,y2,y3,y4;
        x1 = sc.nextInt();
        y1 = sc.nextInt();
        x2 = sc.nextInt();
        y2 = sc.nextInt();
        x3 = sc.nextInt();
        y3 = sc.nextInt();
        x4 = sc.nextInt();
        y4 = sc.nextInt();
       // System.out.println(x1 +" "+ y1 + " "+ x2 + " "+ y2 + " "+x3+" "+ y3+ " "+x4+ " "+y4);
        int canh = 0;
        canh = maxx(canh, Math.abs(x4-x1),Math.abs(y4-y1));
        canh = maxx(canh, Math.abs(x2-x1),Math.abs(y2-y1));
        canh = maxx(canh,Math.abs(x3-x1),Math.abs(y3-y1));
        canh = maxx(canh, Math.abs(x2-x3),Math.abs(y2-y3));
        canh = maxx(canh,Math.abs(x2-x4),Math.abs(y2-y4));
        canh = maxx(canh, Math.abs(x3-x4),Math.abs(y3-y4));
        System.out.println(canh * canh);
    }
}
