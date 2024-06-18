/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05006_danhsachdoituongnhanvien;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05006_DanhSachDoiTuongNhanVien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
      Scanner sc = new Scanner(System.in);
      int t = Integer.parseInt(sc.nextLine());
      while(t-- > 0){
          NhanVien a = new NhanVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
          System.out.println(a);
      }
    }
    
}
