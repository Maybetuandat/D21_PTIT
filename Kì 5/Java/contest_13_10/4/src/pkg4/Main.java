/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg4;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner (new File ("MONHOC.in"));
        TreeSet<SinhVien> ts1 = new TreeSet<>();
        while (true)
        {
        try {
            String cm1 = sc.nextLine();
            String cm2 = sc.nextLine();
            String cm3 = sc.nextLine();
            ts1.add(new SinhVien(cm1, cm2, cm3));
        } 
        catch (Exception e) 
        {
            break;
        }
        
        }
      
        for(SinhVien x : ts1)
        {
            System.out.println(x);
        }
        
    }
    
}
