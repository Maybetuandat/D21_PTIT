/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package online_lientuc;
import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class main {
       public static void main(String[] args) throws FileNotFoundException, ParseException {
          Scanner sc = new Scanner(new File("ONLINE.in"));
        
          ArrayList<Time> ds = new ArrayList<>();
          int t = Integer.parseInt(sc.nextLine());
          while(t-- > 0)
          {
              ds.add(new Time(sc.nextLine(), sc.nextLine(), sc.nextLine()));
          }
          Collections.sort(ds);
          for(Time x: ds)
          {
              System.out.println(x);
          }
    }
}
