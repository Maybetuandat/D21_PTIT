/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07073_dangkihinhthucmonhoc;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07073_dangkihinhthucmonhoc {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File ("MONHOC.in"));
        ArrayList<MonHoc> ds = new ArrayList<>();
        int t  = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            MonHoc a = new MonHoc(sc.nextLine(),sc.nextLine(), sc.nextLine(),sc.nextLine(), sc.nextLine() );
            if(a.getThuchanh().compareTo("Truc tiep") != 0)
            {
                ds.add(a);
            }
        }
        Collections.sort(ds);
        for(MonHoc x : ds)
        {
            System.out.println(x);
        }
    }
    
}
