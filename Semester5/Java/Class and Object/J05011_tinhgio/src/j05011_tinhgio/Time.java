/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05011_tinhgio;
import java.text.ParseException;
import java.util.Date;
import java.text.SimpleDateFormat;
/**
 *
 * @author Dell Gaming
 */
class Time implements Comparable<Time>{
        private String manv, hoten, giovao, giora;
        private long tongthoigian;
    public Time(String manv, String hoten, String giovao, String giora) throws ParseException {
        this.manv = manv;
        this.hoten = hoten;
        this.giovao = giovao;
        this.giora = giora;
        xuli();
    }
    private void xuli() throws ParseException
    {
        SimpleDateFormat dfm = new SimpleDateFormat("hh:mm");
        Date date1 = dfm.parse(giovao);
        Date date2 = dfm.parse(giora);
        tongthoigian = (date2.getTime() - date1.getTime()) / (60 * 1000);
        
    }

    @Override
    public int compareTo(Time o) {
           return (int) (o.tongthoigian - tongthoigian);
    }
    public String toString()
    {
        return manv + " " + hoten + " " + (tongthoigian / 60) + " gio " + (tongthoigian % 60) + " phut";
    }
    
        
}
