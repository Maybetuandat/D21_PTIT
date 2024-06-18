package J07027_quanlybaitapnhom;

public class Nhom implements Comparable<Nhom>{
	private SinhVien sv;
	private String nhom, detai;
	public Nhom()
	{
		
	}
	public void setSinhVien(SinhVien x )
	{
		this.sv = new SinhVien();
		this.sv = x;
	}
	public void setNhom(String nhom, String detai)
	{
		this.nhom = nhom;
		this.detai = detai;
	}
	public String toString()
	{
		return sv + " " + nhom + " " + detai;
	}
	@Override
	public int compareTo(Nhom o) {
		// TODO Auto-generated method stub
		return sv.getMsv().compareTo(o.sv.getMsv());
	}
}
