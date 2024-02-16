/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07034_danhsachmonhoc;

/**
 *
 * @author Dell Gaming
 */
class MonHoc implements Comparable<MonHoc>{
      private String mamon, tenmon, sotinchi;

    public MonHoc(String mamon, String tenmon, String sotinchi) {
        this.mamon = mamon;
        this.tenmon = tenmon;
        this.sotinchi = sotinchi;
    }

    @Override
    public int compareTo(MonHoc o) {
          return tenmon.compareTo(o.tenmon);
    }
    public String toString()
    {
        return mamon + " " + tenmon + " " + sotinchi;
    }
      
}
