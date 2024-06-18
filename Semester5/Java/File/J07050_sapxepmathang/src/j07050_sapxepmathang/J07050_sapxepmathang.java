/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07050_sapxepmathang;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07050_sapxepmathang {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("MATHANG.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<MatHang> ds = new ArrayList<>();
        while(t-- > 0)
        {
            ds.add(new MatHang(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine())));
        }
        Collections.sort(ds);
        for(MatHang x : ds)
        {
            System.out.println(x);
        }
    }
    
}
