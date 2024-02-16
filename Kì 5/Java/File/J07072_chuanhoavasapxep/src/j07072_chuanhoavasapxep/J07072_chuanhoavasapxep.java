/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07072_chuanhoavasapxep;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07072_chuanhoavasapxep{

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        ArrayList<Person> ds = new ArrayList<>();
        while(sc.hasNextLine())
        {
            String cmp = sc.nextLine();
            String [] a = cmp.trim().toLowerCase().split("\\s+");
            String adu = "";
            for(String x : a)
                adu = adu + x.substring(0, 1).toUpperCase() + x.substring(1) + " ";
            ds.add(new Person(adu.trim()));
        }
      
        Collections.sort(ds);
        for(Person x : ds)
        {
            System.out.println(x);
        }

   
    }
    
}
