/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package tinhsothoigianday;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Tinhsothoigianday {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc1 = new Scanner(new File("MONHOC.in"));
        ArrayList<MonHoc> ds1 = new ArrayList<>();
        int t = Integer.parseInt(sc1.nextLine());
        while(t-- > 0)
        {
            String []s = sc1.nextLine().split("\\s+");
            String cmp = "";
            for(int i=1; i<s.length; i++)
                cmp = cmp + s[i] + " ";
            cmp = cmp.trim();
            ds1.add(new MonHoc(s[0], cmp));
        }
        Scanner sc2 = new Scanner(new File("GIANGVIEN.in"));
         ArrayList<GiangVien> ds2 = new ArrayList<>();
          t = Integer.parseInt(sc2.nextLine());
        while(t-- > 0)
        {
            String []s = sc2.nextLine().split("\\s+");
            String cmp = "";
            for(int i=1; i<s.length; i++)
                cmp = cmp + s[i] + " ";
            cmp = cmp.trim();
            ds2.add(new GiangVien(s[0], cmp));
        }
        Scanner sc3 = new Scanner(new File("GIOCHUAN.in"));
        t = Integer.parseInt(sc3.nextLine());
        HashMap<String, Double> hs = new HashMap<>();
        LinkedHashSet<String > thutu = new LinkedHashSet<>();
        while(t-- > 0)
        {
           String s1 = sc3.next();
            sc3.next();
           Double s3 = sc3.nextDouble();
           if(hs.containsKey(s1))
           {
                Double adu = hs.get(s1) + s3;
                hs.put(s1, adu);
           }
             
           else
              hs.put(s1, s3);
           thutu.add(s1);
           
        }
      for(String x : thutu)
      {
          //x la ma giang vien
          for(GiangVien y : ds2)
          {
              if(x.equals(y.getMagv()))
              {
                  GioChuan a = new GioChuan(y.getTengv(), hs.get(x));
                  System.out.println(a);
                  break;
              }
          }
      }
    }
    
}
