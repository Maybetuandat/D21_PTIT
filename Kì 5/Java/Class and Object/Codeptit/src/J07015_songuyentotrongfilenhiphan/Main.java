package J07015_songuyentotrongfilenhiphan;
import java.io.*;
import java.util.*;


public class Main {
	public static int []dem = new int[100009];
	public static void init()
	{
		// bang 0 thi la nt, 1 ko phai nto
		dem[1] = 1;
		for(int i=2; i<= Math.sqrt(10009); i++)
		{
			for(int j=2; j <= 10009 / i; j++)
			{
				dem[i * j] = 1;
			}
		}
	}
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
		ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
		ArrayList<Integer> ds = (ArrayList<Integer>) in1.readObject();
		init();
		int []cnt = new int[10009];
		for(int x : ds)
		{
			if(dem[x] == 0)
				cnt[x] ++;
		}
		for(int i=2; i<10000; i++)
		{
			if(dem[i] == 0 && cnt[i] > 0)
			{
				System.out.println(i + " " + cnt[i]);
			}
		}
		
		
	}
}	
