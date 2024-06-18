/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg4;

/**
 *
 * @author Dell Gaming
 */
class SinhVien implements Comparable<SinhVien>{
       private String mamon, monthi, hinhthucthi;

    public SinhVien(String mamon, String monthi, String hinhthucthi) {
        this.mamon = mamon;
        this.monthi = monthi;
        this.hinhthucthi = hinhthucthi;
    }
    @Override
    public String toString()
    {
        return mamon + " "+ monthi+ " " + hinhthucthi;
    }

    @Override
    public int compareTo(SinhVien o) {
        return mamon.compareTo(o.mamon);
    }
}
