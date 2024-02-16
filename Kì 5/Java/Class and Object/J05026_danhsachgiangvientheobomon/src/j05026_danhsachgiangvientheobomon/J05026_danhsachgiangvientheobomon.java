/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05026_danhsachgiangvientheobomon;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05026_danhsachgiangvientheobomon {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GiangVien> ds = new ArrayList<>();
        for (int i=1; i<=t ; i++)
        {
            ds.add(new GiangVien(sc.nextLine(), sc.nextLine(), i));
        }
        int q = Integer.parseInt(sc.nextLine());
        while(q-- > 0)
        {
            String [] cmp = sc.nextLine().trim().split("\\s+");
            String key = "";
            for (String x : cmp)
                key = key + x.substring(0, 1).toUpperCase();
            System.out.println("DANH SACH GIANG VIEN BO MON " + key + ":");
            for(GiangVien x : ds)
            {
                if(key.compareTo(x.getBomonviettat()) == 0)
                {
                    System.out.println(x);
                }
            }
            
        }
    }
    
}
