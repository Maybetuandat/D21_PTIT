/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07045_loaiphong;

/**
 *
 * @author Dell Gaming
 */
class LoaiPhong  implements Comparable<LoaiPhong>{
      private String loaiphong, tenloaiphong, dongia, phiphucvu;
      private String code;

    public LoaiPhong(String cmp) {
        this.code = cmp.trim();
        String []s = cmp.trim().split("\\s+");
        this.loaiphong = s[0];
        this.tenloaiphong = s[1];
        this.dongia = s[2];
        this.phiphucvu = s[3];
    }

    @Override
    public int compareTo(LoaiPhong o) {
        return tenloaiphong.compareTo(o.tenloaiphong);
    }
      public String toString()
      {
          return code;
      }
}
