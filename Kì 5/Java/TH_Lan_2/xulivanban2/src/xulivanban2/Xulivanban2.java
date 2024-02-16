/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package xulivanban2;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Xulivanban2 {

    /**
     * @param args the command line arguments
     */
    public static boolean check(String s)
    {
        boolean check1 = false;
        for(int i=0; i<s.length(); i++)
        {
             if(s.charAt(i) == ',' || s.charAt(i) == '.' ||s.charAt(i) == '!' || s.charAt(i) == '?' || s.charAt(i) == ':' )
                return false;
            if(Character.isDigit(s.charAt(i)))
            {
                check1 = true;
            }
           
        }
        return check1;
    }
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("VANBAN.in"));
        //ArrayList<String> ds = new ArrayList<>();
        TreeSet<String> ts1 = new TreeSet<>();
        while(sc.hasNext())
        {
            String cmp = sc.next();
            if(check(cmp))
            {
                ts1.add(cmp);
            }
        }
//        Collections.sort(ds, new Comparator<String>(){
//            @Override
//            public int compare(String o1, String o2) {
//                return o1.compareTo(o2);
//            }
//            
//        });
//        for(String x : ds)
//        {
//            System.out.println(x);
//        }
        for(String x : ts1)
        {
            System.out.println(x);
        }
    }
    
}
