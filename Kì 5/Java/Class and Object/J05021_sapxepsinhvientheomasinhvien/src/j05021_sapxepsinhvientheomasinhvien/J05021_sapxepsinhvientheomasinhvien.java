/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05021_sapxepsinhvientheomasinhvien;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author Dell Gaming
 */
public class J05021_sapxepsinhvientheomasinhvien {

  public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        List<SinhVien> ds = new ArrayList<>();
        
        while(sc.hasNextLine())
        {
            ds.add(new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(ds);
        for(SinhVien x : ds)
        {
            System.out.println(x);
        }
    }
    
}
