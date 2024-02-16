/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07053_danhsachtrungtuyen;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07053_DanhSachTrungTuyen {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("THISINH.in"));
        ArrayList<XetTuyen> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add(new XetTuyen(sc.nextLine(), sc.nextLine(),Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine())));
        }
       Collections.sort(ds);
       double ans = 0;
       int chitieu = sc.nextInt();
       int n = ds.size();
      for(int i=0; i<n; i++)
      {
          if(i < chitieu || ds.get(i).getTongdiem() == ans)
          {
              ds.get(i).setLoai("TRUNG TUYEN");
              
          }
          else
          {
              ds.get(i).setLoai("TRUOT");
          }
          if(i == chitieu - 1)
              ans = ds.get(i).getTongdiem();
              
      }
        System.out.format("%.1f\n", ans);
      for(XetTuyen x : ds)
      {
          System.out.println(x);
      }
    }

    
    
    
}
