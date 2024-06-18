package J07010_danhsachsinhvien;
import java.util.*;
import java.io.*;
import java.text.ParseException;
public class Main {
	public static void main(String[] args) throws FileNotFoundException, NumberFormatException, ParseException {
		Scanner sc = new Scanner(new File("SV.in"));
		int t = Integer.parseInt(sc.nextLine());
		while(t-- > 0)
		{
			SinhVien tmp = new SinhVien(
					sc.nextLine(),
					sc.nextLine(),
					sc.nextLine(),
					Double.parseDouble(sc.nextLine())
					);
			System.out.println(tmp);
		}
	}
}
