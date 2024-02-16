/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07051_tinhtienphong;
import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class J07051_tinhtienphong {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        ArrayList<KhachHang> ds = new ArrayList<>();
        
        int  t  = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add(new KhachHang(sc.nextLine(), sc.nextLine()  , sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
        }
        Collections.sort(ds);
        for(KhachHang x : ds)
        {
            System.out.println(x);
        }
    }
    
}
