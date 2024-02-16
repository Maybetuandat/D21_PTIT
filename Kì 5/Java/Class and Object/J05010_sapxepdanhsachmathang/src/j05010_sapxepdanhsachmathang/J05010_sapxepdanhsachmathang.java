/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05010_sapxepdanhsachmathang;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05010_sapxepdanhsachmathang {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        List<MatHang> ds = new ArrayList<>();
        int t= Integer.parseInt(sc.nextLine());
        for(int i=1; i<=t; i++)
        {
            ds.add(new MatHang(i, sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine())));
            
        }
        Collections.sort(ds);
        for(MatHang x : ds)
        {
            System.out.println(x);
        }
    }
    
}
