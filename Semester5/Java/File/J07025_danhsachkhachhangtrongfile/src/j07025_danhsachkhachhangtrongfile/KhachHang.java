/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07025_danhsachkhachhangtrongfile;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 *
 * @author Dell Gaming
 */
class KhachHang implements Comparable<KhachHang>{
    private String hoten, gioitinh, ngaysinh, diachi, makh, year, day, month;
    public static int num =0 ;
    
    public KhachHang(String hoten, String gioitinh, String ngaysinh, String diachi) throws ParseException {
        this.hoten = hoten;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.diachi = diachi;
        chuanhoa();
    }
    private void chuanhoa() throws ParseException
    {
        num++;
        makh = String.format("KH%03d", num);
        String [] s = hoten.trim().toLowerCase().split("\\s+");
        String cmp = "";
        for(String x : s)
        {
            cmp = cmp + x.substring(0, 1).toUpperCase() + x.substring(1) + " ";
        }
        hoten = cmp.trim();
        SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy");
        Date date1 = dfm.parse(ngaysinh);
        ngaysinh = dfm.format(date1);
        year = ngaysinh.substring(6);
        month = ngaysinh.substring(3, 5);
        day = ngaysinh.substring(0, 2);
    }

    @Override
    public int compareTo(KhachHang o) {
          if(year.compareTo(o.year) == 0)
          {
              if(month.compareTo(o.month) == 0)
              {
                  return day.compareTo(o.day);
              }
              return month.compareTo(o.month);
          }
          return year.compareTo(o.year);
    }
    public String toString()
    {
        return makh + " " + hoten +" "+ gioitinh + " " +diachi + " " + ngaysinh;
    }
}
