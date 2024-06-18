/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package baohanhsanpham;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
class KhachHang implements Comparable<KhachHang>{
   private String ma, ten, dc, masp;
    private int s1, tong;
    private Date  nmua, han;
    private SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy");
    public static int num = 0;
    public KhachHang( String ten, String dc, String masp, int s1, String cmp) throws ParseException {
        num++;
        this.ma= String.format("KH%02d",num );
        this.ten = ten;
        this.dc = dc;
        this.masp = masp;
        this.s1 = s1;
        this.nmua = dfm.parse(cmp);
    }

    public String getMasp() {
        return masp;
    }

    public void setTong(int x) {
        tong = s1 * x;
    }

    public void setHan(int x) {
        Calendar cal = Calendar.getInstance();
        cal.setTime(nmua);
        cal.add(Calendar.MONTH, x);
        han = cal.getTime();
    }
    public String toString()
    {
        return ma + " "+ ten + " " + dc+ " " +masp + " " + tong + " " +dfm.format(han);
    }

    @Override
    public int compareTo(KhachHang o) {
         if(this.han.compareTo(o.han) == 0)  return this.ma.compareTo(o.ma);
         return (int) han.compareTo(o.han);
    }
    

}
