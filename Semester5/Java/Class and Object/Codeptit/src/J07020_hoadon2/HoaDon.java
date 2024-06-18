package J07020_hoadon2;

public class HoaDon {
	private MatHang mh;
	private KhachHang kh;
	private long soluong;
	public static int num = 0;
	private String mahd;
	public void  setKhachHang(KhachHang x)
	{
		this.kh = new KhachHang();
		this.kh = x;
		num ++;
		this.mahd = String.format("HD%03d", num);
	}
	public void setMatHang(MatHang x )
	{
		this.mh = new MatHang();
		this.mh = x;
	}
	public void  setSoluong(long  x)
	{
		this.soluong = x;
	}
	public String toString()
	{
		return mahd + " " + kh.getTenkh() + " " + kh.getDiachi() + " " + mh.getTen() + " " + mh.getDonvi() + " " + mh.getMua() + " " + mh.getBan() + " "+ soluong + " "+ (soluong * mh.getBan());
	}
	
}
