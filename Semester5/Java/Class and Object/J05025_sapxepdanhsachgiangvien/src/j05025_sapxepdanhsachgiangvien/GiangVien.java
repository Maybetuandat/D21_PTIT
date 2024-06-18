/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05025_sapxepdanhsachgiangvien;

/**
 *
 * @author Dell Gaming
 */
class GiangVien implements Comparable<GiangVien>{
    private String hoten, ten, magv, bomon;
    public static int num = 0;
    public GiangVien(String hoten, String s) {
        this.hoten = hoten;
        num++;
        magv = String.format("GV%02d", num);
        String []cmp = hoten.trim().split("\\s+");
        ten =  cmp[cmp.length - 1];
        String [] adu = s.toUpperCase().trim().split("\\s+");
        bomon = "";
        for(String x : adu)
            bomon = bomon + x.charAt(0);
    }
    public String toString()
    {
        return magv + " " + hoten + " " + bomon;
    }

    @Override
    public int compareTo(GiangVien o) {
        if(ten.compareTo(o.ten)  == 0)
        {
            return magv.compareTo(o.magv);
        }
        return ten.compareTo(o.ten);
    }
            
}   
