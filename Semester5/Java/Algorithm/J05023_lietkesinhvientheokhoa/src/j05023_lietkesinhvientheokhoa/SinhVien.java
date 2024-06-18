/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05023_lietkesinhvientheokhoa;

/**
 *
 * @author Dell Gaming
 */
class SinhVien {
    private String masv, hoten, lop, email;

    public SinhVien(String masv, String hoten, String lop, String email) {
        this.masv = masv;
        this.hoten = hoten;
        this.lop = lop;
        this.email = email;
    }
    public String toString()
    {
        return masv + " " + hoten + " " + lop + " " + email;
    }

    public String getMasv() {
        return masv;
    }

    public String getLop() {
        return lop;
    }
    
    
}
