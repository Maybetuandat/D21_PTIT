/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05006_danhsachdoituongnhanvien;

/**
 *
 * @author Dell Gaming
 */
class NhanVien {
      private String  manv, ten , gioitinh, ngaysinh, diachi, mst, ngaykihd;
      public static int num = 0;

    public NhanVien(String ten, String gioitinh, String ngaysinh, String diachi, String mst, String ngaykihd) {
        this.ten = ten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.diachi = diachi;
        this.mst = mst;
        this.ngaykihd = ngaykihd;
        num ++;
        String cmp =String.valueOf(num);
        while(cmp.length() < 5)
            cmp = '0' + cmp;
        this.manv = cmp;
    }
     public String toString()
     {
         return manv + " " + ten + " " + gioitinh + " " + ngaysinh + " " + diachi + " " + mst + " " + ngaykihd;
     }
}
