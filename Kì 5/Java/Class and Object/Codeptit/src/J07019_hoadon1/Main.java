package J07019_hoadon1;
import java.util.*;
import java.io.*;
public class Main {

	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc1 = new Scanner(new File("DATA1.in"));
		Scanner sc2 = new Scanner(new File("DATA2.in"));
		int t = Integer.parseInt(sc1.nextLine());
		ArrayList<SanPham> ds1 = new ArrayList<>(); 
		while(t-- > 0)
		{
			ds1.add(new SanPham(sc1.nextLine(), sc1.nextLine(), Long.parseLong(sc1.nextLine()), Long.parseLong(sc1.nextLine())));
		}
		t= Integer.parseInt(sc2.nextLine());
		ArrayList<HoaDon> ds2 = new ArrayList<>();
		while(t-- > 0)
		{
			String []s = sc2.nextLine().trim().split("\\s+");
			String key = s[0].substring(0, 2);
			for(SanPham x : ds1)
			{
				if (key.compareTo(x.getMasp()) == 0)
				{
					long giatien;
					if(s[0].charAt(2) == '1' )
					{
						   giatien = x.getGia1();
						  
					}
					else
					{
						 giatien = x.getGia2();
					}
					ds2.add(new HoaDon(s[0], x.getTensp(),giatien,  Long.parseLong(s[1]) ));
				}
			}
		}
		for(HoaDon x : ds2)
		{
			System.out.println(x);
		}
		
	}
}
