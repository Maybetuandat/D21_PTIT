/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07056_tinhtiendien;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07056_tinhtiendien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        ArrayList<TienDien> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add(new TienDien(sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(ds);
        for(TienDien x : ds)
        {
            System.out.println(x);
        }
    }
    
}
