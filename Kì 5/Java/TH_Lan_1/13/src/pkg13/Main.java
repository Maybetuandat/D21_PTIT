/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg13;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("MONHOC.in"));
        ArrayList<MonHoc> a = new ArrayList<>();
        TreeSet<String> s = new TreeSet<>();
        while(sc.hasNextLine())
        {
            String s1, s2, s3;
            try {
                  s1 = sc.nextLine();
            
              } 
            catch (Exception e) {
                break;
            }
            try {
                  s2 = sc.nextLine();
            
              } 
            catch (Exception e) {
                break;
            }
           try {
                  s3 = sc.nextLine();
            
              } 
            catch (Exception e) {
                break;
            }
            if(s.contains(s1))
            {
               continue;
            }
            s.add(s1);
            a.add(new MonHoc(s1, s2, s3));
         
        }
        Collections.sort(a);
        for(MonHoc x : a){
            System.out.println(x);
        }
    }
    
}
