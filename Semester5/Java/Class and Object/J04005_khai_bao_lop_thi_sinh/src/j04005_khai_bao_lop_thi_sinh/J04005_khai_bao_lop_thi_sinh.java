/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j04005_khai_bao_lop_thi_sinh;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J04005_khai_bao_lop_thi_sinh {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        SinhVien a = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextFloat(), sc.nextFloat(), sc.nextFloat());
        System.out.println(a);
    }
    
}
