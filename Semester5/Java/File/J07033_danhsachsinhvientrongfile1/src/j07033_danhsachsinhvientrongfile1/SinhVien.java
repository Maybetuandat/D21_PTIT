/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07033_danhsachsinhvientrongfile1;

/**
 *
 * @author Dell Gaming
 */
class SinhVien implements Comparable<SinhVien>{
      private String masv, hovaten, lop, email;

    public SinhVien(String masv, String hovaten, String lop, String email) {
        this.masv = masv;
        this.hovaten = hovaten;
        this.lop = lop;
        this.email = email;
        xuli();
    }
    void xuli()
    {
        String [] s = hovaten.trim().toLowerCase().split("\\s+");
        String cmp = "";
        for(String x : s)
        {
            cmp = cmp + x.substring(0, 1).toUpperCase() + x.substring(1) + " ";
            
        }
        this.hovaten = cmp.trim();
    }

    @Override
    public int compareTo(SinhVien o) {
        return masv.compareTo(o.masv);
    }
    public String toString()
    {
        return masv + " " + hovaten + " " + lop + " " + email;
    }
}
