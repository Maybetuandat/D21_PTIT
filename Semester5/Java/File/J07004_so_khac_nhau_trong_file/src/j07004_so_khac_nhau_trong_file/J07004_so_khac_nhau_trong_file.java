/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07004_so_khac_nhau_trong_file;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class J07004_so_khac_nhau_trong_file {

    /**
     * @param args the command line arguments
     * @throws java.io.FileNotFoundException
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("DATA.in"));
        int []dem = new int[1005];
        while(sc.hasNext())
        {
            dem[sc.nextInt()]++;
        }
        for(int i=0; i<1000; i++){
            if(dem[i] != 0){
                System.out.println(i+ " "+ dem[i]);
            }
        }
       
    }
    
}
