/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05028_danhsachdoanhnghiepnhansinhvienthuctap;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05028_danhsachdoanhnghiepnhansinhvienthuctap {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc= new Scanner(System.in);
        ArrayList<DoanhNghiep> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add((new DoanhNghiep(sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine()))));
        }
        Collections.sort(ds);
        for(DoanhNghiep x : ds)
        {
            System.out.println(x);
        }
    }
    
}
