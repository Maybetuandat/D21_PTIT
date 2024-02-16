/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04005_khai_bao_lop_thi_sinh;

/**
 *
 * @author Dell Gaming
 */
class SinhVien {
    private String name, date;
    float diem1 , diem2 , diem3;

    public SinhVien(String name, String date, float diem1, float diem2, float diem3) {
        this.name = name;
        this.date = date;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }
    @Override
    public String toString()
    {
        float tong = diem1 + diem2 + diem3;
        return name + " " + date + " " + String.format("%.1f",tong);
    }
}
