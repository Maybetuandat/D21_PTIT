package J07084_thoigianonlinelientuc;
import java.util.*;
import java.io.*;
import java.text.ParseException;
public class Main {
	public static void main(String[] args) throws FileNotFoundException, ParseException {
		Scanner sc= new Scanner(new File("ONLINE.in"));
		int t = Integer.parseInt(sc.nextLine());
		ArrayList<Time> ds = new ArrayList<>();
		while(t-- > 0)
		{
			ds.add(new Time(sc.nextLine(), sc.nextLine(),sc.nextLine()));
		}
		Collections.sort(ds);
		for(Time x : ds)
		{
			System.out.println(x);
		}
	}
}
