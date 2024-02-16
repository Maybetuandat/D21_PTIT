/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05005_danhsachdoituongsinhvien3;

import static java.lang.Math.round;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 *
 * @author Dell Gaming
 */
class SinhVien implements Comparable<SinhVien>{
    public static int num  = 1;
    private String masv, ten, ngaysinh, lop;
    private  float gpa;

     void xuli() throws ParseException
    {
        
        SimpleDateFormat in = new SimpleDateFormat("dd/MM/yyyy");
        Date date = in.parse(ngaysinh);
        ngaysinh = in.format(date);
        String []s = ten.trim().toLowerCase().split("\\s+");
        String cmp = "";
        for(String x : s)
            cmp = cmp + x.substring(0, 1).toUpperCase() + x.toLowerCase().substring(1) + " ";
        cmp = cmp.trim();
        ten = cmp;
    }
    public SinhVien(String ten, String lop, String ngaysinh, float gpa) throws ParseException {
        this.ten = ten;
        this.ngaysinh = ngaysinh;
        this.lop = lop;
        this.gpa = gpa;
        this.masv = String.format("B20DCCN%03d", num++);
        xuli();
    }
    
    @Override
    public String toString()
    {
        return masv + " " + ten + " " + lop + " " + ngaysinh+ " " + String.format("%.2f", gpa);
    }

    @Override
    public int compareTo(SinhVien o) {
        
        
        return Float.compare(o.gpa, gpa);
    }
    
}
