/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07059_danhsachcathi;

/**
 *
 * @author Dell Gaming
 */
class CaThi implements Comparable<CaThi>{
      private String ngaythi, giothi, sophong, masv;
      public static int num = 0;
    public CaThi(String ngaythi, String giothi, String sophong) {
        num++;
        masv = String.format("C%03d", num);
        this.ngaythi = ngaythi;
        this.giothi = giothi;
        this.sophong = sophong;
    }
     public String toString()
     {
         return masv + " " +ngaythi + " " + giothi +" " +  sophong; 
     }

    @Override
    public int compareTo(CaThi o) {
          if(ngaythi.compareTo(o.ngaythi) == 0)
          {
              if(giothi.compareTo(o.giothi) == 0)
              {
                  return masv.compareTo(o.masv);
              }
              return giothi.compareTo(o.giothi);
          }
          return ngaythi.compareTo(o.ngaythi);
    }
}
