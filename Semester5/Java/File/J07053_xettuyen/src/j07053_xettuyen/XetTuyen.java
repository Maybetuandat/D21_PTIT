/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07053_xettuyen;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
/**
 *
 * @author Dell Gaming
 */
class XetTuyen {
      private String hoten, ngaysinh, manv, loai;
      private double diemlythuyet, diemthuchanh , diem;
      public static int num = 0;
      private int tuoi, diemtrungbinh;
      
    public XetTuyen(String hoten, String ngaysinh, double diemlythuyet, double diemthuchanh) throws ParseException {
        num++;
        this.manv = String.format("PH%02d", num);
        this.hoten = hoten;
        this.ngaysinh = ngaysinh;
        this.diemlythuyet = diemlythuyet;
        this.diemthuchanh = diemthuchanh;
        this.diem = (diemlythuyet + diemthuchanh)  / 2;
        chuanhoahoten();
        chuanhoangaysinh();
        
                
    }
    void chuanhoahoten()
    {
        String [] s = hoten.trim().toLowerCase().split("\\s+");
        String cmp = "";
        for(String x : s)
        {
            cmp = cmp + x.substring(0, 1).toUpperCase() + x.substring(1) + " ";
        }
        this.hoten = cmp.trim();
    }
    void chuanhoangaysinh() throws ParseException
    {
        SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy");
        Date date = dfm.parse(ngaysinh);
        this.ngaysinh = dfm.format(date);
        this.tuoi = 2021 - Integer.parseInt(ngaysinh.substring(6));
    }

    public double getDiemlythuyet() {
        return diemlythuyet;
    }

    public double getDiemthuchanh() {
        return diemthuchanh;
    }

    public void setDiemtrungbinh(double diemcong) {
        this.diemtrungbinh = (int) Math.round(this.diem + diemcong);  
        if(this.diemtrungbinh > 10)
            this.diemtrungbinh = 10;
        setLoai();
    }
    void setLoai()
    {
        if(diemtrungbinh < 5)
            loai = "Truot";
        if(diemtrungbinh >= 5 && diemtrungbinh <= 6)
            loai= "Trung binh";
        if(diemtrungbinh == 7)
            loai = "Kha";
        if(diemtrungbinh == 8)
            loai = "Gioi";
        if(diemtrungbinh == 9 || diemtrungbinh ==  10)
            loai = "Xuat sac";
    }
   
    
    public String toString ()
    {
        return manv + " " + hoten + " " + tuoi + " "+ diemtrungbinh + " "+ loai;
    }

  
}
