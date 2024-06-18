/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05023_lietkesinhvientheokhoa;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05023_lietkesinhvientheokhoa {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        ArrayList<SinhVien> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            ds.add(new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        int  q = sc.nextInt();
        while(q-- > 0)
        {
            String cmp = sc.next();
            System.out.format("DANH SACH SINH VIEN KHOA %s:\n", cmp);
            for(SinhVien x : ds)
            {
                if(x.getLop().charAt(1) == cmp.charAt(2) && x.getLop().charAt(2) == cmp.charAt(3))
                {
                    System.out.println(x);
                }
            }
        }
    }
    
}
