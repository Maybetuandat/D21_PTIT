/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg10;
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
     * @throws java.io.FileNotFoundException
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("LUYENTAP.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<LuyenTap> a = new ArrayList<>();
        
        while(t -- > 0){
            a.add(new LuyenTap(sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(a);
        for(LuyenTap x : a)
        {
            System.out.println(x);
        }
        
    }
    
}
