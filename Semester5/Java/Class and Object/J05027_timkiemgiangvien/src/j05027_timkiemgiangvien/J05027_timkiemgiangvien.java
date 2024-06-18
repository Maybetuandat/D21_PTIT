/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05027_timkiemgiangvien;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05027_timkiemgiangvien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GiangVien> ds = new ArrayList<>();
        for(int i=1; i<=t ; i++)
        {
            ds.add(new GiangVien(sc.nextLine(),sc.nextLine(), i));
        }
        int q = Integer.parseInt(sc.nextLine());
        while(q-- > 0)
        {
            String cmp = sc.nextLine();
            
            System.out.println("DANH SACH GIANG VIEN THEO TU KHOA "+ cmp + ":");
            cmp = cmp.toLowerCase();
            for(GiangVien x : ds)
            {
                if(x.getTengv().contains(cmp))
                {
                    System.out.println(x);
                }
            }
        }
    }
    
}
