package J07020_hoadon2;

public class MatHang {
	private String tenmh, mamh, donvi;
	private long giamua, giaban;
	public static int num = 0;
	public MatHang()
	{
		
	}
	public MatHang(String tenmh, String donvi, long giamua, long giaban)
	{
		num++;
		this.mamh = String.format("MH%03d", num);
		this.tenmh = tenmh;
		this.donvi = donvi;
		this.giamua = giamua;
		this.giaban = giaban;
	}
	public String getMamh()
	{
		return mamh;
	}
	public long getMua()
	{
		return giamua;
	}
	public long getBan()
	{
		return giaban;
	}
	public String getTen()
	{
		return tenmh;
	}
	public String getDonvi()
	{
		return donvi;
	}
}
