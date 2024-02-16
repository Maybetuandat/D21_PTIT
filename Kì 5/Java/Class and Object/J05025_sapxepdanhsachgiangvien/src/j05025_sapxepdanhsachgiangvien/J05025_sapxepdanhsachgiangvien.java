/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05025_sapxepdanhsachgiangvien;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05025_sapxepdanhsachgiangvien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        ArrayList<GiangVien> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add(new GiangVien(sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(ds);
        for(GiangVien x : ds)
        {
            System.out.println(x);
        }
    }
    
}
