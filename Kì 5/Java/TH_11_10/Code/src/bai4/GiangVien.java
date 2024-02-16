/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai4;

/**
 *
 * @author Dell Gaming
 */
class GiangVien {
        private double gioday;
        private String magv, hoten;

    public GiangVien() {
    }

    public GiangVien(String magv, String hoten) {
        this.magv = magv;
        this.hoten = hoten;
    }

    public void setGioday(double gioday) {
        this.gioday += gioday;
    }

    public String getMagv() {
        return magv;
    }
    public String toString()
    {
        return hoten + " " + String.format("%.2f", gioday);
    }
        
    
}
