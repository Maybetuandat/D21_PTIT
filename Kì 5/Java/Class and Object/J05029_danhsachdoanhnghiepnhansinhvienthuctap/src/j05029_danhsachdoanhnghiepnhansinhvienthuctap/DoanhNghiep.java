/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05029_danhsachdoanhnghiepnhansinhvienthuctap;

/**
 *
 * @author Dell Gaming
 */
class DoanhNghiep implements Comparable<DoanhNghiep>{
    private String madn, tendn;
    private int sosv;

    public DoanhNghiep(String madn, String tendn, int sosv) {
        this.madn = madn;
        this.tendn = tendn;
        this.sosv = sosv;
    }

    public int getSosv() {
        return sosv;
    }
    
    public String toString()
    {
        return madn + " " + tendn + " " + sosv;
    }

    @Override
    public int compareTo(DoanhNghiep o) {
        if(sosv == o.sosv)
        {
            return madn.compareTo(o.madn);
        }
        return (int)(o.sosv - sosv);
    }
           
}   
