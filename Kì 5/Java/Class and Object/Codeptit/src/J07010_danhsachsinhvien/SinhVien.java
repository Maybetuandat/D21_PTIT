package J07010_danhsachsinhvien;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
public class SinhVien {
	private String hoten, masv,lop,  date;
	private double gpa;
	public static int num = 0;
	public SinhVien(String hoten, String lop, String date, double gpa) throws ParseException
	{
		num++;
		this.hoten = hoten;
		this.masv = String.format("B20DCCN%03d", num);
		this.lop = lop;
		SimpleDateFormat dfm = new SimpleDateFormat("dd/mm/yyyy");
		Date date1 = dfm.parse(date);
		this.date = dfm.format(date1);
		this.gpa = gpa;
	}
	public String toString()
	{
		return masv + " " + hoten + " " + lop + " " + date + " " + String.format("%.2f", gpa);
	}
}
