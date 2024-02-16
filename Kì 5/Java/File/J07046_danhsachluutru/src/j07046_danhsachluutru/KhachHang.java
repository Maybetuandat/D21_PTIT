/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07046_danhsachluutru;
import java.util.*;
import java.text.*;
/**
 *
 * @author Dell Gaming
 */
class KhachHang implements Comparable<KhachHang> {
    public static int  num = 0;
    private String hovaten, maphong,makh;
    private Date ngayden, ngaydi;
    private long  sosanh;

    public KhachHang(String hovaten, String  maphong, Date ngayden, Date ngaydi) {
        this.hovaten = hovaten;
        this.maphong = maphong ;
        this.ngayden = ngayden;
        this.ngaydi = ngaydi;
        num++;
        this.makh = String.format("KH%02d", num);
        this.sosanh = (ngaydi.getTime() - ngayden.getTime()) / (1000 * 60 * 60 * 24);
        
    }
   
    @Override
    public int compareTo(KhachHang o) {
         return (int) (o.sosanh - sosanh);
    }
    public String toString()
    {
        return makh + " " + hovaten+ " " + maphong + " "+ sosanh;
    }
}
