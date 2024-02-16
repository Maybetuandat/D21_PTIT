/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07059_danhsachcathi;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07059_danhsachcathi {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("CATHI.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<CaThi> ds = new ArrayList<>();
        while(t-- > 0)
        {
            ds.add( new CaThi(sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(ds);
        for(CaThi x : ds)
        {
            System.out.println(x);
        }
    }
    
}
