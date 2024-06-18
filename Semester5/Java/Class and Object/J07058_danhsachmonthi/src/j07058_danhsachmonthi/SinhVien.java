/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07058_danhsachmonthi;

/**
 *
 * @author Dell Gaming
 */
class SinhVien implements Comparable<SinhVien>{
     private String mamon, tenmon, hinhthucthi;

    public SinhVien(String mamon, String tenmon, String hinhthucthi) {
        this.mamon = mamon;
        this.tenmon = tenmon;
        this.hinhthucthi = hinhthucthi;
    }
    public String toString(){
        return mamon + " " + tenmon + " " + hinhthucthi;
    }

    @Override
    public int compareTo(SinhVien o) {
                return mamon.compareTo(o.mamon);
    }
}
