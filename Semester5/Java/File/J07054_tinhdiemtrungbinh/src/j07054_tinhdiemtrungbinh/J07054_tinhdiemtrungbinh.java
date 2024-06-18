/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07054_tinhdiemtrungbinh;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07054_tinhdiemtrungbinh {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("BANGDIEM.in"));
        int t  = Integer.parseInt(sc.nextLine());
        ArrayList<SinhVien> ds = new ArrayList<>();
        while(t-- > 0)
        {
            ds.add(new SinhVien(sc.nextLine(),Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine())));
        }
        Collections.sort(ds);
        int n = ds.size();
        int rank = 1;
        int i = 0;
        while(i < n)
        {
            double adu = ds.get(i).getDiemtrungbinh();
            
            int j = i +1;
            while(j < n && ds.get(j).getDiemtrungbinh() == adu)
                  j+=1;
            for(int k = i; k < j; k++)
                ds.get(k).setThuhang(rank);
            rank += j - i;
            i = j;
         
            
        }
        for(SinhVien x : ds)
        {
            System.out.println(x);
        }
    }
    
}
