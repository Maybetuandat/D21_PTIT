package J07027_quanlybaitapnhom;

public class SinhVien {
	private String msv, ten, sdt;
	public SinhVien()
	{
		
	}
	public SinhVien(String msv, String ten, String sdt)
	{
		this.msv = msv;
		this.ten = ten;
		this.sdt = sdt;
	}
	public String getMsv()
	{
		return msv;
	}
	public String toString()
	{
		return msv + " " + ten + " " + sdt;
	}
}	
