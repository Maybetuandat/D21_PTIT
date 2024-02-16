/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package jkt013_solocphat;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class JKT013_solocphat {

    /**
     * @param n
     * @param args the command line arguments
     */
    public static void xuli(int n)
    {
        Queue<String> q = new LinkedList<>();
        ArrayList<String> ans  = new ArrayList<>();
        q.add("6");
        q.add("8");
        while(!q.isEmpty())
        {
            String top = q.poll();
            if(top.length() > n)
                continue;
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
        System.out.println("");
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            xuli(n);
        }
    }
    
}
