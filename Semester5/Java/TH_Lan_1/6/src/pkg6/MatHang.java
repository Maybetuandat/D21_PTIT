/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg6;

/**
 *
 * @author Dell Gaming
 */
public class MatHang {
    private String name, code;
    private int dongia, soluong;
    private long giamgia, thanhtien;

    public MatHang(String name, String code, int dongia, int soluong) {
        this.name = name;
        this.code = code;
        this.dongia = dongia;
        this.soluong = soluong;
        chuanhoa();
    }
    void chuanhoa(){
        int ma = Integer.parseInt(code.substring(code.length() - 1));
        if(ma == 1)
        {
            giamgia = (5 * dongia * soluong) / 10;
            thanhtien = (5 * dongia * soluong) / 10;
        }
        else
        {
             giamgia = (3 * dongia * soluong) / 10;
            thanhtien = (7 * dongia * soluong) / 10;
        }
    }
    public String toString()
    {
        return name + " " + code + " " + code.substring(1, 4) + " " + giamgia + " " + thanhtien;
    }
    
}
