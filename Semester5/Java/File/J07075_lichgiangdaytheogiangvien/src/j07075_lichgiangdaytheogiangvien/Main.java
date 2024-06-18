/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07075_lichgiangdaytheogiangvien;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner in1 = new Scanner(new File("MONHOC.in"));
        HashMap<String, String> hsmap = new HashMap<>();
        int t = Integer.parseInt(in1.nextLine());
        while(t-- > 0)
        {
            hsmap.put(in1.nextLine().trim(),in1.nextLine().trim());
            in1.nextLine();
        }
        Scanner sc = new Scanner(new File("LICHGD.in"));
        t = Integer.parseInt(sc.nextLine());
        ArrayList<LichGD> ds = new ArrayList<>();
        while(t-- > 0 )
        {
            String mamon = sc.nextLine();
             LichGD a = new LichGD(mamon, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(),hsmap.get(mamon));
             ds.add(a);
        }
        Collections.sort(ds);
        String key = sc.nextLine().trim();
        System.out.println("LICH GIANG DAY GIANG VIEN " + key +  ":");
        for(LichGD x : ds)
        {
            if(key.compareTo(x.getTengv()) == 0)
            {
                System.out.println(x);
            }
        }
       
        
    }
    
}
