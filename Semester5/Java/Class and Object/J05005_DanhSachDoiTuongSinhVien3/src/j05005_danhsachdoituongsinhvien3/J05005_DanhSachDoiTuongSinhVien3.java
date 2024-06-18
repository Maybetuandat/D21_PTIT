/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05005_danhsachdoituongsinhvien3;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Dell Gaming
 */
public class J05005_DanhSachDoiTuongSinhVien3 {

    /**
     * @param args the command line arguments
     */
   public static void main(String[] args) throws ParseException {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> ds = new ArrayList<>();
        for(int i=1; i<= t; i++)
        {
            ds.add((new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()))));
         
           
        }
       
       Collections.sort(ds);
       for(SinhVien x : ds)
       {
           System.out.println(x);
       }
    }
    
}
