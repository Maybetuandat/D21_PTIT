/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j04006_khai_bao_lop_sinh_vien;
import java.text.ParseException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J04006_khai_bao_lop_sinh_vien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws ParseException {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        SinhVien a = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextFloat());
        System.out.println(a);
    }
    
}
