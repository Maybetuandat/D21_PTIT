/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j05011_tinhgio;
import java.text.ParseException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J05011_tinhgio {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws ParseException {
        // TODO code application logic here
        Scanner sc= new Scanner(System.in);
        List<Time> ds = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0)
        {
            ds.add(new Time(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(ds);
        for(Time x : ds)
        {
            System.out.println(x);
        }
    }
    
}
