/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai4;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main {
      public static void main(String[] args) throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("MONHOC.in"));
        HashMap<String, String> hsmapmonhoc = new HashMap<>();
        int t  = Integer.parseInt(sc1.nextLine());
        while(t-- > 0)
        {
            String []s = sc1.nextLine().trim().split("\\s+");
            String cmp = "";
            for(int i=1; i<s.length; i++)
                  cmp= cmp + s[i] + " ";
            hsmapmonhoc.put(s[0], cmp.trim());
        }
        ArrayList<GiangVien> dsgiangvien = new ArrayList<>();
         Scanner sc2 = new Scanner(new File("GIANGVIEN.in"));
         t = Integer.parseInt(sc2.nextLine());
         while(t--  > 0)
         {
             String []s = sc2.nextLine().trim().split("\\s+");
            String cmp = "";
            for(int i=1; i<s.length; i++)
                  cmp= cmp + s[i] + " ";
            dsgiangvien.add(new GiangVien(s[0], cmp.trim()));
         }
         
          Scanner sc3 = new Scanner(new File("GIOCHUAN.in"));
         t = Integer.parseInt(sc3.nextLine());
         while(t-- > 0)
         {
               String []s = sc3.nextLine().trim().split("\\s+");
               for(GiangVien x : dsgiangvien)
               {
                   if(x.getMagv().compareTo(s[0]) == 0)
                   {
                       x.setGioday(Double.parseDouble(s[2]));
                   }
               }
         }
         for(GiangVien x: dsgiangvien)
         {
             System.out.println(x);
         }
        
    }
}
