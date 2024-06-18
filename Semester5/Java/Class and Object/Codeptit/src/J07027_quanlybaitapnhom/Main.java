package J07027_quanlybaitapnhom;
import java.util.*;
import java.io.*;
public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc1= new Scanner(new File("SINHVIEN.in"));
		Scanner sc2= new Scanner(new File("BAITAP.in"));
		Scanner sc3 = new Scanner(new File("NHOM.in"));
		ArrayList<SinhVien> sv = new ArrayList<>();
		int t = Integer.parseInt(sc1.nextLine());
		while(t-- > 0)
		{
			sv.add(new SinhVien(sc1.nextLine(), sc1.nextLine(), sc1.nextLine()));
		}
		HashMap<Integer, String> hsmap = new HashMap<Integer, String>();
		t = Integer.parseInt(sc2.nextLine());
		for(int i=1; i<=t; i++)
		{
			hsmap.put(i, sc2.nextLine());
		}
		ArrayList<Nhom>  nhom = new ArrayList<>();
		
		while(sc3.hasNextLine())
		{
			String []s = sc3.nextLine().split("\\s+");
			for(SinhVien x : sv)
			{
				Nhom tmp = new Nhom();
				if(s[0].compareTo(x.getMsv()) == 0)
				{
					tmp.setSinhVien(x);
					tmp.setNhom(s[1], hsmap.get(Integer.parseInt(s[1])));
					nhom.add(tmp);
					break;
					
				}
			}
		}
		Collections.sort(nhom);
		for(Nhom x : nhom)
		{
			System.out.println(x);
		}
	}
}
