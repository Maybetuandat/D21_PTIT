/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07021_chuanhoahotentrongfile;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07021_chuanhoahotentrongfile {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("DATA.in"));
        String cmp = sc.nextLine().trim();
        while(cmp.compareTo("END") != 0){
            String [] s = cmp.trim().toLowerCase().split("\\s+");
            for(String x : s)
            {
                System.out.print(x.substring(0, 1).toUpperCase() + x.substring(1)  + " ");
            }
            System.out.println("");
            
            cmp = sc.nextLine().trim();
        }
    }
    
}
