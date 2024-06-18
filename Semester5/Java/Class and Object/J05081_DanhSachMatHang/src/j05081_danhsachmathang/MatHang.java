/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05081_danhsachmathang;

/**
 *
 * @author Dell Gaming
 */
class MatHang implements Comparable<MatHang>{
    private String maMh, ten, donvitinh;
    private int giamua, giaban, loinhuan;

    public MatHang(String ten, String donvitinh, int giamua, int giaban, int i) {
        this.ten = ten;
        this.donvitinh = donvitinh;
        this.giamua = giamua;
        this.giaban = giaban;
        this.loinhuan = giaban - giamua;
        String cmp = String.valueOf(i);
        while(cmp.length() < 3)
            cmp = '0' + cmp;
        cmp = "MH" + cmp;
        this.maMh = cmp;
    }

    @Override
    public int compareTo(MatHang o) {
        if(loinhuan == o.loinhuan)
            return maMh.compareTo(o.maMh);
        return o.loinhuan - loinhuan;
    }
    public String toString()
    {
        return maMh + " " + ten + " " + donvitinh+ " " + giamua + " "+ giaban + " " + loinhuan;
    }
}
