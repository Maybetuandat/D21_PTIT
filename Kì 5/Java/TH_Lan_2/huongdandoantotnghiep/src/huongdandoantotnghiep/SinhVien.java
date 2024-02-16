/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package huongdandoantotnghiep;

/**
 *
 * @author Dell Gaming
 */
class SinhVien{
       private String masv, hoten, lop, email, phone;

    public SinhVien(String masv, String hoten, String lop, String email, String phone) {
        this.masv = masv;
        this.hoten = hoten;
        this.lop = lop;
        this.email = email;
        this.phone = '0' + phone;
    }

    public String getHoten() {
        return hoten;
    }

    public String getPhone() {
        return phone;
    }
    
   

    public String getMasv() {
        return masv;
    }
   
  
   
    
}
