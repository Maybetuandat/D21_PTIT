/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07010_danhsachsinhvientrongfile;
import java.text.ParseException;
import java.util.*;
import java.text.SimpleDateFormat;
/**
 *
 * @author Dell Gaming
 */
class SinhVien {
    private String masv, hovaten, malop, ngaysinh;
    private double gpa;
    public static int num = 0;
    public SinhVien( String hovaten, String malop, String ngaysinh, double gpa) throws ParseException {
        num++;
        masv = String.format("B20DCCN%03d",num) ;

        this.hovaten = hovaten;
        this.malop = malop;
        this.ngaysinh = ngaysinh;
        this.gpa = gpa;
        xuli();
    }
    void xuli() throws ParseException
    {
        SimpleDateFormat input = new SimpleDateFormat("dd/MM/yyyy");
        
        Date date = input.parse(ngaysinh);
        ngaysinh = input.format(date);
    }
    public String toString()
    {
        return masv + " " + hovaten + " " + malop + " " + ngaysinh + " " + String.format("%.2f", gpa);
    }
}
