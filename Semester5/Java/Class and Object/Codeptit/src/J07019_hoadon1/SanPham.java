package J07019_hoadon1;

public class SanPham {
	private String masp, tensp;
	private long gia1, gia2;
	public SanPham(String masp, String tensp, long gia1, long gia2)
	{
		this.masp = masp;
		this.tensp = tensp;
		this.gia1 = gia1;
		this.gia2 = gia2;
	}
	public String getMasp()
	{
		return masp;
	}
	public long getGia1()
	{
		return gia1;
	}
	public long getGia2()
	{
		return gia2;
	}
	public String getTensp()
	{
		return tensp;
	}
	
}
