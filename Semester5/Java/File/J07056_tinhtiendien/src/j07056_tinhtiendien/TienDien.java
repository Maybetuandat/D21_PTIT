/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07056_tinhtiendien;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
class TienDien implements Comparable<TienDien>{
      private String makh, hoten ;
      private char loai;
      private int dau, cuoi, sotienphainop, tientrongdinhmuc, tienvuotdinhmuc, thueVAT;
      public static int num = 0;
    public TienDien(String hoten, String cmp) {
        num++;
        makh = String.format("KH%02d", num);
        this.hoten = hoten;
        String [] s = cmp.trim().split("\\s+");
        loai = s[0].charAt(0);
        dau = Integer.parseInt(s[1]);
        cuoi = Integer.parseInt(s[2]);
        chuanhoahoten();
        xuli();
    }
    void chuanhoahoten()
    {
        String []s = hoten.trim().toLowerCase().split("\\s+");
        String cmp = "";
        for(String x : s)
            cmp = cmp + x.substring(0, 1).toUpperCase() + x.substring(1) + " ";
        hoten = cmp.trim();
    }
    void xuli()
    {
        int sodien = cuoi - dau;
        int [] dinhmuc = new int[3];
        dinhmuc[0] = 100;
        dinhmuc[1] = 500 ;
        dinhmuc[2] = 200 ;
        int index = (int) (loai - 'A');
       if(sodien < dinhmuc[index])
           tientrongdinhmuc= sodien * 450;
       else 
           tientrongdinhmuc =  dinhmuc[index] * 450;
       if(sodien > dinhmuc[index])
         tienvuotdinhmuc =  (sodien - dinhmuc[index]) * 1000;
       else
           tienvuotdinhmuc = 0;
       thueVAT = tienvuotdinhmuc / 20;
       sotienphainop = tientrongdinhmuc + tienvuotdinhmuc + thueVAT;
       
    }

    @Override
    public int compareTo(TienDien o) {
        return (int) (o.sotienphainop - sotienphainop);
    }
    public  String toString()
    {
        return makh + " " + hoten + " " + tientrongdinhmuc + " " + tienvuotdinhmuc + " " + thueVAT + " " + sotienphainop;
    }
}
