package J07084_thoigianonlinelientuc;
import java.text.*;
import java.util.*;
public class Time implements Comparable<Time> {
	private String ten;
	private long time;
	public Time(String ten, String thoigianvao, String thoigianra) throws ParseException {
	
		String []s = ten.toLowerCase().trim().split("\\s+");
		String cmp = "";
		
		for(String x : s)
			cmp = cmp + x.substring(0, 1).toUpperCase() + x.substring(1) + " ";
		this.ten = cmp.trim();
		
		SimpleDateFormat dfm = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
		Date date1 = dfm.parse(thoigianvao);
		Date date2 = dfm.parse(thoigianra);
		this.time = (date2.getTime()- date1.getTime()) / (60 * 1000);
		
		
	}
	public String toString()
	{
		return ten + " " + time;
	}
	@Override
	public int compareTo(Time o) {
		// TODO Auto-generated method stub
		if(o.time == time)
			return ten.compareTo(o.ten);
		return (int)(o.time - time);
	}
	
}
