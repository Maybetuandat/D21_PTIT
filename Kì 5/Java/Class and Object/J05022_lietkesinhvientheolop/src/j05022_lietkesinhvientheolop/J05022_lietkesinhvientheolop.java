/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05022_lietkesinhvientheolop;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author Dell Gaming
 */
public class J05022_lietkesinhvientheolop {

    /**
     * @param args the command line arguments
     */
   public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        List<SinhVien> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add(new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        int q = Integer.parseInt(sc.nextLine());
        while(q-- > 0)
        {
            String cmp = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN LOP " +cmp + ":" );
            for(SinhVien x : ds)
            {
                if(cmp.compareTo(x.getLop()) == 0)
                {
                    System.out.println(x);
                }
            }
        }
     
      
    }
}
