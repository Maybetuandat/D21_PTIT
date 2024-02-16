/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05022_lietkesinhvientheolop;

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

    public String getLop() {
        return lop;
    }
    
     public String toString()
     {
         return masv + " " + hoten + " " + lop + " " + email;
     }
}
