/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05018_bangdiemhocsinh;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05018_bangdiemhocsinh {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        List<HocSinh> ds = new ArrayList<>();
        
        for(int i=1; i<=t; i++)
        {
            ds.add(new HocSinh(sc.nextLine(), i, sc.nextLine()));
        }
        Collections.sort(ds);
        for(HocSinh x : ds)
        {
            System.out.println(x);
        }
    }
    
}
