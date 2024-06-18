/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04012_baitoantinhcong;

import java.util.*;

/**
 *
 * @author Dell Gaming
 */
class NhanVien {
    private String ten, manv;
    private int luongthang, thuong, phucap, thunhap;
    public NhanVien(String ten, int luongngay, int songay, String chucvu)
    {
        this.ten = ten;
        this.manv = "NV01";
       Map<String, Integer> hs1 = new HashMap<>();
       hs1.put("GD", 250000 );
       hs1.put("PGD", 200000);
       hs1.put("TP",  180000);
       hs1.put("NV",  150000);
        this.luongthang = luongngay * songay;
        if (songay >= 25 )
            this.thuong = this.luongthang / 5;
        else if (songay >= 22 && songay < 25)
        {
            this.thuong = this.luongthang / 10;
        }
        else
        {
            this.thuong = 0;
        }
        this.phucap = hs1.get(chucvu);
        this.thunhap = this.luongthang + this.thuong + this.phucap;
            
    }
    public String toString()
    {
        return manv + " " +ten + " " + luongthang + " " + thuong + " " + phucap + " " + thunhap;
    }
    
}
