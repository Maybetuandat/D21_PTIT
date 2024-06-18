package J07022_loaibosonguyen;
import java.util.*;
import java.io.*;
public class Main {
	public static void main(String[] args) throws FileNotFoundException {
		Scanner sc= new Scanner(new File("DATA.in"));
		ArrayList<String> ds1 = new ArrayList<String>();
		while(sc.hasNext())
		{
			String cmp = sc.next();
			try 
			{
				int x = Integer.parseInt(cmp);
				continue;
			} 
			catch (Exception e) 
			{
				// TODO: handle exception
				ds1.add(cmp);
			}
		}
		Collections.sort(ds1);;
		for(String x : ds1)
		{
			System.out.print(x + " ");
		}
	}
	
	
}