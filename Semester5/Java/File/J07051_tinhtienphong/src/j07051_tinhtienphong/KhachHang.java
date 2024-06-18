/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07051_tinhtienphong;

import java.util.*;
import java.text.*;
/**
 *
 * @author Dell Gaming
 */
class KhachHang implements Comparable<KhachHang>{
       private String ten, sophong, makh;
       private Date ngayden, ngaydi;
       private long songayo, sotientong, phiphatsinh;
       SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy");
       public static int num = 0;
    public KhachHang(String ten, String sophong, String s1, String  s2, int phiphatsinh) throws ParseException {
        num++;
        this.makh = String.format("KH%02d", num);
        this.ten = ten.trim();
        this.sophong = sophong;
        this.ngayden = dfm.parse(s1);
        this.ngaydi = dfm.parse(s2);
        this.phiphatsinh = phiphatsinh;
        chuanhoaten();
    }

    void chuanhoaten()
    {
        String [] s= ten.trim().toLowerCase().split("\\s+");
        String cmp = "";
        for(String x : s)
        {
            cmp = cmp + x.substring(0, 1).toUpperCase() + x.substring(1)+ " ";
        }
        this.ten = cmp.trim();
        songayo = (ngaydi.getTime() - ngayden.getTime()) / (24 * 60 * 60 * 1000) + 1;
        int adu = Integer.parseInt(sophong.substring(0, 1));
        long  [] arr = new long  [5];
        arr[1] = 25;
        arr[2] = 34;
        arr[3] = 50; 
        arr[4] = 80;
        this.sotientong= songayo * arr[adu ] + phiphatsinh;
    }
 
    @Override
    public int compareTo(KhachHang o) {
          return  (int) (o.sotientong - sotientong);
    }
    public String toString()
    {
        return makh + " " + ten + " " + sophong + " " + songayo + " "+ sotientong;
    }
} 
