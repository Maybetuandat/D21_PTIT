/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05024_lietkesinhvientheonganh;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05024_lietkesinhvientheonganh {

    /**
     * @param args the command line arguments
     */
    public static boolean check(String s, String s1)
    {
        if(s.charAt(0) == 'E' && s1.compareTo("DCCN") == 0)
            return false;
        if(s.charAt(0) == 'E' && s1.compareTo("DCAT") == 0)
            return false;
        return true;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> ds = new ArrayList<>();
        while(t-- > 0)
        {
            ds.add(new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        int q = Integer.parseInt(sc.nextLine());
        while(q-- > 0)
        {
            String cmp = sc.nextLine().toUpperCase();
            String [] adu = cmp.trim().split("\\s+");
            String viettat ="DC" +  adu[0].charAt(0) + adu[1].charAt(0);
            
            System.out.println("DANH SACH SINH VIEN NGANH " + cmp + ":");
            for(SinhVien x : ds)
            {
                   String test = x.getMasv().substring(3, 7);
                   if(viettat.compareTo(test) == 0 && check(x.getLop(), test))
                   {
                       System.out.println(x);
                   }
            }
            
            
        }
    }
    
}
