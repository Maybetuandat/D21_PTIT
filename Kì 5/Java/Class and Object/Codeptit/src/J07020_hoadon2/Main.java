package J07020_hoadon2;
import java.util.*;
import java.io.*;
public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc1= new Scanner(new File("KH.in"));
		Scanner sc2= new Scanner(new File("MH.in"));
		Scanner sc3= new Scanner(new File("HD.in"));
		int t = Integer.parseInt(sc1.nextLine());
		ArrayList<KhachHang> kh = new ArrayList<>();
		while(t-- > 0)
		{
			kh.add(new KhachHang(sc1.nextLine(), sc1.nextLine(), sc1.nextLine(), sc1.nextLine()));
		}
		ArrayList<MatHang> mh = new ArrayList<>();
		t = Integer.parseInt(sc2.nextLine());
		while(t-- > 0)
		{
			mh.add(new MatHang(sc2.nextLine(),sc2.nextLine(), Long.parseLong(sc2.nextLine()),Long.parseLong(sc2.nextLine()) ));
		}
		t = Integer.parseInt(sc3.nextLine());
		ArrayList<HoaDon> hd = new ArrayList<>();
		while(t-- > 0)
		{
			String [] s= sc3.nextLine().split("\\s+");
			HoaDon tmp = new HoaDon();
			for(KhachHang x : kh)
			{
				if(s[0].compareTo(x.getMakh()) == 0)
				{
					tmp.setKhachHang(x);
					break;
				}
			}
			for(MatHang x : mh)
			{
				if(s[1].compareTo(x.getMamh()) == 0)
				{
					tmp.setMatHang(x);
					break;
				}
			}
			tmp.setSoluong(Long.parseLong(s[2]));
			System.out.println(tmp);
			
		}
		
	}
}
