/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05024_lietkesinhvientheonganh;

/**
 *
 * @author Dell Gaming
 */
class SinhVien {
    private String masv, hovaten, lop, email;

    public SinhVien(String masv, String hovaten, String lop, String email) {
        this.masv = masv;
        this.hovaten = hovaten;
        this.lop = lop;
        this.email = email;
    }
    public String toString()
    {
        return masv + " " + hovaten + " " + lop +  " " + email; 
    }

    public String getLop() {
        return lop;
    }

    public String getMasv() {
        return masv;
    }

    
    
}
