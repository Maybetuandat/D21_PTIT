/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05018_bangdiemhocsinh;

/**
 *
 * @author Dell Gaming
 */
class HocSinh  implements Comparable<HocSinh>{
    private String hoten, mahs, xeploai;
    private double diemtrungbinh;

    public HocSinh(String hoten, int index, String cmp) {
        this.hoten = hoten;
        this.mahs = String.format("HS%02d", index);
        String []s = cmp.trim().split("\\s+");
        diemtrungbinh = Double.parseDouble(s[0]) * 2;
        diemtrungbinh += Double.parseDouble(s[1]) * 2;
        for(int i=2; i<s.length; i++)
        {
            diemtrungbinh += Double.parseDouble(s[i]);
        }
        diemtrungbinh = diemtrungbinh / 12;
        
        xuli();
        
    }
    private void xuli()
    {
          if(diemtrungbinh >= 9)
            xeploai = "XUAT SAC";
          if(diemtrungbinh >= 8 && diemtrungbinh <= 8.9)
             xeploai = "GIOI";
          if(diemtrungbinh >= 7 && diemtrungbinh <= 7.9)
             xeploai = "KHA";
           if(diemtrungbinh >= 5 && diemtrungbinh <= 6.9)
             xeploai = "TB";
           if(diemtrungbinh < 5)
               xeploai = "YEU";
          
    }
    @Override
    public int compareTo(HocSinh o) {
           if(diemtrungbinh == o.diemtrungbinh)
           {
               return mahs.compareTo(o.mahs);
           }
           return (int) (10000 * (o.diemtrungbinh - diemtrungbinh));
    }
    public String toString()
    {
        diemtrungbinh = Math.round(diemtrungbinh * 10.0) / 10.0;
        return mahs + " "+ hoten + " " + String.format("%.1f", diemtrungbinh) + " " + xeploai;
    }
}
