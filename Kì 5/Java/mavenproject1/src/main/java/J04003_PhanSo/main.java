/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04003_PhanSo;

import java.util.Scanner;

/**
 *
 * @author Dell Gaming
 */
public class main {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
             PhanSo p = new PhanSo(sc.nextLong() , sc.nextLong());
             System.out.println(p);
    }
}
