/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07018_chuanhoadanhsachsinhvien;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
class SinhVien {
      private String masv, hoten, ngaysinh, lop;
      private Double gpa;
      public static int num = 0;

    public SinhVien(String hoten, String lop, String ngaysinh, Double gpa) throws ParseException {
        this.hoten = hoten;
        this.ngaysinh = ngaysinh;
        this.lop = lop;
        this.gpa = gpa;
        chuanhoa();
    }
    private void chuanhoa() throws ParseException
    {
        num++;
        masv =  String.format("B20DCCN%03d", num);
        String []s = hoten.trim().toLowerCase().split("\\s+");
        String cmp = "";
        for(String x : s)
        {
            cmp = cmp + x.substring(0, 1).toUpperCase() + x.substring(1) + " ";
        }
        hoten = cmp.trim();
        SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy");
        Date date1 = dfm.parse(ngaysinh);
        ngaysinh = dfm.format(date1);
        
    }
    public String toString()
    {
        return masv + " " + hoten + " " + lop + " " + ngaysinh + " " + String.format("%.2f", gpa);
    }
}
