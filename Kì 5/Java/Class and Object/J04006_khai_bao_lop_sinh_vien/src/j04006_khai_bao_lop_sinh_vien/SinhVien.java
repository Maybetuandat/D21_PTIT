/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04006_khai_bao_lop_sinh_vien;
import java.text.ParseException;
import java.util.*;
import java.text.SimpleDateFormat;
/**
 *
 * @author Dell Gaming
 */
class SinhVien {
    private String name, msv = "B20DCCN001", classes, date;
    private float gpa;

    public SinhVien() {
        this.name = "";
        this.classes = "";
        this.date = "";
        this.gpa = 0;
    }
    
  
    
    public SinhVien(String name, String classes, String date, float gpa) throws ParseException {
        this.name = name;
        this.classes = classes;
        this.date = date;
        this.gpa = gpa;
        chuanhoa();
    }
     void chuanhoa() throws ParseException{
        SimpleDateFormat standardize = new SimpleDateFormat("dd/mm/yyyy");
        Date d = standardize.parse(date);
        date = standardize.format(d);
        
    }
    @Override
    public String toString()
    {
        return msv + " " + name +" " +  classes + " " + date +" " +  String.format("%.2f", gpa);
    }
    
}
