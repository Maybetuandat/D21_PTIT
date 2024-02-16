/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07040_lietketheothutuxuathien;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07040_lietketheothutuxuathien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
        ArrayList<String> ds = (ArrayList<String>) in.readObject();
        HashSet<String> file1 = new HashSet<>();
        for(String x : ds)
        {
            String []s = x.trim().split("\\s+");
            for(String cmp : s)
                file1.add(cmp.toLowerCase());
        }
        HashSet<String> file2 = new HashSet<>();
        
        Scanner sc = new Scanner(new File("VANBAN.in"));
        while(sc.hasNext())
        {
            String cmp = sc.next().trim().toLowerCase();
            if(file1.contains(cmp)  &&  !file2.contains(cmp))
            {
                System.out.println(cmp);
                file2.add(cmp);
            }
        }
        
        
        
    }
    
}
