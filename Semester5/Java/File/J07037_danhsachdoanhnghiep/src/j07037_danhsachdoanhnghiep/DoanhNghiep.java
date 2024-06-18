/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07037_danhsachdoanhnghiep;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
class DoanhNghiep  implements Comparable<DoanhNghiep>{
    private String madn, tendn, sosv;

    public DoanhNghiep(String madn, String tendn, String sosv) {
        this.madn = madn;
        this.tendn = tendn;
        this.sosv = sosv;
    }
    
    @Override
    public int compareTo(DoanhNghiep o) {
        return madn.compareTo(o.madn);
    }
    public String toString()
    {
        return madn + " " + tendn + " " + sosv;
    }
}
