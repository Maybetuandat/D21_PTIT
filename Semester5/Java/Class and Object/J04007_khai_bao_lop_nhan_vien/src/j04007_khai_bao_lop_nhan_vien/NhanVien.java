/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04007_khai_bao_lop_nhan_vien;

/**
 *
 * @author Dell Gaming
 */
class NhanVien {
    private String manv = "00001", name, sex, date, address, code, datecontract;

    public NhanVien(String name, String sex, String date, String address, String code, String datecontract) {
        this.name = name;
        this.sex = sex;
        this.date = date;
        this.address = address;
        this.code = code;
        this.datecontract = datecontract;
    }
    @Override
    public String toString(){
        return  manv + " " + name + " "+ sex + " " + date + " " + address + " " + code +" " + datecontract;
    }
}
