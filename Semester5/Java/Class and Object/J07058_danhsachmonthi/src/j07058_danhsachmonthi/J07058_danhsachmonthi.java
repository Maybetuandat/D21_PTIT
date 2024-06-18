/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07058_danhsachmonthi;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07058_danhsachmonthi {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> ds = new ArrayList<>();
        while(t-- > 0){
            ds.add(new SinhVien(sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim()));
        }
        
        Collections.sort(ds);
         for(SinhVien  x : ds)
            {
        System.out.println(x);
              }
    
    
    
    
    }
   
   
    
}
