package J07020_hoadon2;
import java.util.*;
public class KhachHang {
	private String makh, tenkh, gioitinh, ngaysinh, diachi;
	public static int num = 0;
	public KhachHang()
	{
		
	}
	public KhachHang(String tenkh, String gioitinh, String ngaysinh, String diachi)
	{
		num++;
		this.makh = String.format("KH%03d",  num);
		this.tenkh = tenkh;
		this.gioitinh= gioitinh;
		this.ngaysinh = ngaysinh;
		this.diachi = diachi;
	}
	public String getMakh()
	{
		return makh;
	}
	public String getTenkh()
	{
		return tenkh;
	}
	public String getDiachi()
	{
		return  diachi;
	}
}
