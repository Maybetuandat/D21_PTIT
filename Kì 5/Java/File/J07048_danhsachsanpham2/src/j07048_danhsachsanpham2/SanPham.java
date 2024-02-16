/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07048_danhsachsanpham2;

/**
 *
 * @author Dell Gaming
 */
class SanPham  implements Comparable<SanPham>{
       private String masp, tensp;
       private int giaban, baohanh;

    public SanPham(String masp, String tensp, int giaban, int baohanh) {
        this.masp = masp;
        this.tensp = tensp;
        this.giaban = giaban;
        this.baohanh = baohanh;
    }

    @Override
    public int compareTo(SanPham o) {
        if(giaban == o.giaban)
            return masp.compareTo(o.masp);
        return o.giaban - giaban;
    }
    public String toString()
    {
        return masp + " " + tensp + " " + giaban + " " + baohanh;
    }
}
