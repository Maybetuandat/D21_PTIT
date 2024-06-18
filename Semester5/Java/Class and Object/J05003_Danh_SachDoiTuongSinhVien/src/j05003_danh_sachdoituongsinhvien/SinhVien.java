/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05003_danh_sachdoituongsinhvien;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
class SinhVien {
    private String masv = "B20DCCN", ten, ngaysinh, lop;
    private  double gpa;

    public SinhVien(String ten, String lop, String ngaysinh, double gpa, int i) throws ParseException {
        this.ten = ten;
        this.ngaysinh = ngaysinh;
        this.lop = lop;
        this.gpa = gpa;
        String cmp = String.valueOf(i);
        while(cmp.length() < 3)
             cmp = '0' + cmp;
        masv = masv + cmp;
        xuli();
    }
    final void xuli() throws ParseException
    {
        
        SimpleDateFormat in = new SimpleDateFormat("dd/mm/yyyy");
        Date date = in.parse(ngaysinh);
        ngaysinh = in.format(date);
    }
    @Override
    public String toString()
    {
        return masv + " " + ten + " " + lop + " " + ngaysinh+ " " + String.format("%.2f", gpa);
    }
    
}
