/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05007_sapxepdanhsachdoituongnhanvien;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05007_sapxepdanhsachdoituongnhanvien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NhanVien> ds = new ArrayList<>();
        while(t-- > 0)
        {
            ds.add(new NhanVien (sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(ds);
        for(NhanVien x : ds)
        {
            System.out.println(x);
        }
    }
    
}
