/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05030_bangdiemthanhphan;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05030_bangdiemthanhphan {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<BangDiem> ds = new ArrayList<>();
        while(t-- > 0)
        {
            ds.add(new BangDiem(sc.nextLine(),sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine())));
            
        }
        Collections.sort(ds);
        int dem = 0;
        for(BangDiem x : ds)
        {
            dem++;
            System.out.println(dem + " " + x);
        }
    }
    
}
