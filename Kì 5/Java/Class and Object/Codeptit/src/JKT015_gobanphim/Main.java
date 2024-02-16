package JKT015_gobanphim;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		String s = sc.nextLine();
		Stack<Character> st1 = new Stack<Character>();
		Stack<Character> st2 = new Stack<Character>();
		for(int i=0; i<s.length(); i++)
		{
			if(s.charAt(i) == '<')
			{
				if(st1.empty())
					continue;
				st2.push(st1.pop());
				
			}
			else if (s.charAt(i) == '>')
			{
				if(st2.empty())
					continue;
				st1.push(st2.pop());
				
			}
			else if(s.charAt(i) == '-')
			{
				if (st1.empty())
					continue;
				st1.pop();
			}
			else
			{
				st1.push(s.charAt(i));
			}
		}
		while(!st1.isEmpty()){
            st2.push(st1.pop());
        }
        while(!st2.isEmpty()){
            System.out.print(st2.pop());
            
        }
	}
}
