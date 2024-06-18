/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg1;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            String s = sc.next();
            ArrayList<Character> a = new ArrayList<>();
            long sum = 0;
            for(int i=0; i<s.length(); i++)
            {
                if(s.charAt(i) >= 'A' && s.charAt(i)  <= 'Z')
                    a.add(s.charAt(i));
                else
                    sum += (s.charAt(i) - '0');
            }
            Collections.sort(a);
            for(Character x : a)
            {
                System.out.print(x);
            }
            System.out.println(sum);
        }
        
    }
    
}
