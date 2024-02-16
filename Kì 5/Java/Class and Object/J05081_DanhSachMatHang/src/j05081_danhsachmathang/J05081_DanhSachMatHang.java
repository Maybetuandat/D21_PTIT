/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05081_danhsachmathang;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05081_DanhSachMatHang {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<MatHang> ds = new ArrayList<>();
        for(int i=1; i<=t; i++)
        {
            ds.add((new MatHang(sc.nextLine(), sc.next(), sc.nextInt(), sc.nextInt(), i)));
            sc.nextLine();
        }
        Collections.sort(ds);
        for(MatHang x : ds){
            System.out.println(x);
        }
    }
    
}
