/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package huongdandoantotnghiep;

/**
 *
 * @author Dell Gaming
 */
class HuongDan  implements Comparable<HuongDan>{
      private String masv, tensv, tengv, tedonan, sdt;

    public HuongDan(String masv, String tensv, String tengv, String tedonan, String sdt) {
        this.masv = masv;
        this.tensv = tensv;
        this.tengv = tengv;
        this.tedonan = tedonan;
        this.sdt = sdt;
    }

    @Override
    public int compareTo(HuongDan o) {
         return masv.compareTo(o.masv);
    }
     public String toString()
     {
         return masv + " " + tensv + " "+ tengv + " " + tedonan + " " + sdt;
     }
}
