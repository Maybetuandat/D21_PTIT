/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05009_timthukhoakythi;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05009_timthukhoakythi {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc= new Scanner(System.in);
        List<ThuKhoa> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add(new ThuKhoa(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine())));
        }
        Collections.sort(ds);
        double ans = ds.get(0).getTongdiem();
        for(ThuKhoa x : ds)
        {
            if(x.getTongdiem() == ans)
            {
                System.out.println(x);
            }
            else
                break;
        }
    }
    
}
