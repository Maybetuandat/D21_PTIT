/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package baohanhsanpham;

/**
 *
 * @author Dell Gaming
 */
class SanPham {
     private String ma, ten;
     private int gia, bh;

    public SanPham(String masp, String ten, int gia, int bh) {
        this.ma = masp;
        this.ten = ten;
        this.gia = gia;
        this.bh= bh;
    }

    public String getMa() {
        return ma;
    }

    public int getGia() {
        return gia;
    }

   

    public int getBh() {
        return bh;
    }

   
     
}
