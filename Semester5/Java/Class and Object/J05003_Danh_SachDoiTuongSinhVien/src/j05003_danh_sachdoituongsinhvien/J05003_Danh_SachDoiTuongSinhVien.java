/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05003_danh_sachdoituongsinhvien;
import java.text.ParseException;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class J05003_Danh_SachDoiTuongSinhVien {

    /**
     * @param args the command line arguments
     * @throws java.text.ParseException
     */
    public static void main(String[] args) throws ParseException {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> ds = new ArrayList<>();
        for(int i=1; i<= t; i++)
        {
            ds.add((new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), i)));
            
        }
        for(SinhVien x : ds)
        {
            System.out.println(x);
        }
        
    }
    
}
