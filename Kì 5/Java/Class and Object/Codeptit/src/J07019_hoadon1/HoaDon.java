package J07019_hoadon1;

public class HoaDon {
	private String mahoadon, tensp;
	private long thanhtien, giamgia;
	public static int num = 0;
	public HoaDon(String ma, String ten,long giatien, long  soluong )
	{
		num++;
		this.mahoadon = ma + "-" + String.format("%03d",num );
		this.tensp = ten;
		this.thanhtien = soluong * giatien;
		if (soluong >= 150)
		{
			this.thanhtien = this.thanhtien / 2;
			this.giamgia = this.thanhtien;
		}
		else if (  soluong >= 100  ) 
		{
			this.giamgia = (this.thanhtien * 3) / 10;
		    this.thanhtien = (this.thanhtien * 7 ) / 10;	
		}
		else if(soluong >= 50)
		{
			this.giamgia = (this.thanhtien * 15) / 100;
			this.thanhtien = (this.thanhtien * 85) / 100;
		}
			
	}
	public String toString()
	{
		return mahoadon + " " + tensp + " " + giamgia + " " + thanhtien;
	}
}
