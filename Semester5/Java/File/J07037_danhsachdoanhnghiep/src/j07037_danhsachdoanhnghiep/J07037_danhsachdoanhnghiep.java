/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07037_danhsachdoanhnghiep;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07037_danhsachdoanhnghiep {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("DN.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<DoanhNghiep> ds = new ArrayList<>();
        
        while(t-- > 0)
        {
            ds.add(new DoanhNghiep(sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(ds);
        for(DoanhNghiep x : ds)
        {
            System.out.println(x);
        }
    }
    
    
}
