/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07010_danhsachsinhvientrongfile;
import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07010_danhsachsinhvientrongfile {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        // TODO code application logic here
       Scanner sc = new Scanner(new File ("SV.in"));
       int t = Integer.parseInt(sc.nextLine());
       while(t -- > 0){
           SinhVien a = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()));
           System.out.println(a);
       }
    }
    
}
