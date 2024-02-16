/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05029_danhsachdoanhnghiepnhansinhvienthuctap;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05029_danhsachdoanhnghiepnhansinhvienthuctap {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<DoanhNghiep> ds = new ArrayList<>();
        while(t-- > 0)
        {
            ds.add(new DoanhNghiep(sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
        }
        Collections.sort(ds);
        int q = sc.nextInt();
        while (q-- > 0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println("DANH SACH DOANH NGHIEP NHAN TU " +a + " DEN " + b+  " SINH VIEN:");
            for(DoanhNghiep x : ds)
            {
                if(x.getSosv() >= a && x.getSosv() <= b)
                {
                    System.out.println(x);
                }
            }
        }
    }
    
}
