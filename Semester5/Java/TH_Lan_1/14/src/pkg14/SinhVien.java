/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg14;

/**
 *
 * @author Dell Gaming
 */
class SinhVien implements Comparable<SinhVien>{
    private String msv, name, phone , email, madetai, tendetai, tengv;

    public SinhVien(String msv, String name, String phone, String email) {
        this.msv = msv;
        this.name = name;
        this.phone = phone;
        this.email = email;
    }

    public String getMsv() {
        return msv;
    }

    public void setMadetai(String madetai) {
        this.madetai = madetai;
    }

    public void setTendetai(String tendetai) {
        this.tendetai = tendetai;
    }

    public void setTengv(String tengv) {
        this.tengv = tengv;
    }

    public String getTendetai() {
        return tendetai;
    }
    
    @Override
    public int compareTo(SinhVien o) {
         return tendetai.compareTo(o.getTendetai());
    }
    
    public String toString()
    {
        return msv + " " + name + " " + phone + " " + email + " " + tengv  + " " + tendetai;
    }
}
