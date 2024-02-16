/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ICPC;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class main {
      public static void main(String[] args) throws FileNotFoundException {
          Scanner sc = new Scanner(new File("INSTITUTION.in"));
          HashMap<String, String> hs1 = new HashMap<>();
          int t = Integer.parseInt(sc.nextLine());
          while(t-- > 0)
          {
              String []s = sc.nextLine().trim().split("\\s+");
              String cmp = "";
              for(int i=1; i<s.length; i++)
              {
                  cmp = cmp + s[i] + " ";
              }
              hs1.put(s[0], cmp.trim());
          }
          Scanner sc1 = new Scanner(new File("REGISTER.in"));
          t = Integer.parseInt(sc1.nextLine());
          ArrayList<Team> ds = new ArrayList<>();
          while(t-- > 0)
          {
              String []s = sc1.nextLine().trim().split("\\s+");
              int n = Integer.parseInt(s[1]);
              for(int i=0; i<n; i++)
              {
                  ds.add(new Team(sc1.nextLine(), hs1.get(s[0])));
              }
              
          }
          Collections.sort(ds);
          for(int i=0; i<ds.size(); i++)
          {
              String cmp = String.format("team%02d", i + 1);
              ds.get(i).setSott(cmp);
          }
          for(Team x : ds)
          {
              System.out.println(x);
          }
          
          
    }
}
