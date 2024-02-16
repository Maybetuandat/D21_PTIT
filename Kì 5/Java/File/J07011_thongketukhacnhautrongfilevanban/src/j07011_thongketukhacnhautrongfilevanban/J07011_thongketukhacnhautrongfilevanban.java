/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07011_thongketukhacnhautrongfilevanban;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07011_thongketukhacnhautrongfilevanban {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("VANBAN.in"));
        int t = Integer.parseInt(sc.nextLine());
        HashMap<String,Long> hsmap = new HashMap<>();
        while(t-- > 0)
        {
            String []a = sc.nextLine().toLowerCase().split("[^a-z0-9]+");
            for(String x : a)
            {
                if(!hsmap.containsKey(x))
                {
                    hsmap.put(x, Long.valueOf("1"));
                }
                else
                {
                    
                    hsmap.put(x, hsmap.get(x) + 1);
                }
            }
        }
        ArrayList<Pair> ds = new ArrayList<>();
        for(String x : hsmap.keySet())
        {
            ds.add(new Pair(x,hsmap.get(x)));
        }
        Collections.sort(ds);
        for(Pair x : ds)
        {
            System.out.println(x);
        }
        
       
    }
    
}
