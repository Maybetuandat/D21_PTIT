/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04013_baitoantuyensinh;

/**
 *
 * @author Dell Gaming
 */
class XetTuyen {
      private String mats, hoten, loai;
      private double toan , ly, hoa, tongdiem, diemuutien;

    public XetTuyen(String mats, String hoten, double toan, double ly, double hoa) {
        this.mats = mats;
        this.hoten = hoten;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
        this.tongdiem = ly + toan * 2 + hoa;
        xuli();
    }
     void xuli()
     {
         String cmp = mats.substring(0 , 3);
         if(cmp.compareTo("KV1") == 0)
         {
             diemuutien = 0.5;
         }
         if(cmp.compareTo("KV2") == 0)
         {
             diemuutien = 1;
         }
         if(cmp.compareTo("KV3") == 0)
         {
             diemuutien = 1.5;
         }
         if(diemuutien + tongdiem >= 24)
             loai = "TRUNG TUYEN";
         else
             loai= "TRUOT";
     }
     public String toString()
     {
         String  cmp1 ;
         if((diemuutien * 10) % 10 == 0)
         {
             cmp1 = String.valueOf((int) diemuutien);
         }
         else
         {
             cmp1 = String.format("%.1f", diemuutien);
         }
         String cmp2;
          if((tongdiem * 10) % 10 == 0)
         {
             cmp2 = String.valueOf((int) tongdiem);
         }
         else
         {
             cmp2 = String.format("%.1f", tongdiem);
         }   
         return mats + " " + hoten + " " + cmp1 + " " + cmp2+  " "+ loai;
     }
}
