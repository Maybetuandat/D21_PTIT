/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07022_loaibosonguyen;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07022_loaibosonguyen {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("DATA.in"));
        ArrayList<String> ds = new ArrayList<>();
        while(sc.hasNext())
        {
            String cmp = sc.next();
            try {
                
                int x = Integer.parseInt(cmp);
            } 
            catch (Exception e) 
            {
                ds.add(cmp);
            }
        }
        Collections.sort(ds);
        for(String x : ds)
        {
            System.out.print(x + " ");
        }
    }
    
}
