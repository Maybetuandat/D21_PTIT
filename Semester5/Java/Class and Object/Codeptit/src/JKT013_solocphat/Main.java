package JKT013_solocphat;
import java.util.*;
public class Main {
	public static void xuli(int n)
	{
		Queue<String> q = new LinkedList<String>();
		q.add("6");
		q.add("8");
		ArrayList<String > ans = new ArrayList<String>();
	
		while(!q.isEmpty())
		{
			String top = q.poll();
			if (top.length() > n)
				break;
			ans.add(top);
			q.add(top + "6");
			q.add(top + "8");
		}
		Collections.reverse(ans);
		System.out.println(ans.size());
		for(String x : ans)
		{
			System.out.print(x + " ");
		}
	}
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0)
		{
			int n = sc.nextInt();
			xuli(n);
			System.out.println();
		}
	}
}