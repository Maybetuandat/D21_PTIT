/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package baohanhsanpham;
import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Baohanhsanpham {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("MUAHANG.in"));
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<SanPham> ds = new ArrayList<>();
        for(int i=0; i<n; i++)
        {
          ds.add(new SanPham(sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine())));
        }
        int m = Integer.parseInt(sc.nextLine());
        ArrayList<KhachHang> ds2 = new ArrayList<>();
        for(int i=0 ; i<m; i++)
        {
            
            ds2.add( new KhachHang(sc.nextLine(), sc.nextLine() , sc.nextLine() , Integer.parseInt(sc.nextLine()), sc.nextLine()));
            for(int j=0; j<n; j++)
            {
                if(ds2.get(i).getMasp().compareTo(ds.get(j).getMa()) == 0)
                {
                    ds2.get(i).setTong(ds.get(j).getGia() );
                    ds2.get(i).setHan(ds.get(j).getBh());   
                }
            }
        }
        Collections.sort(ds2);
        for(KhachHang x : ds2){
            System.out.println(x);
        }
        
        
    }
    
}
