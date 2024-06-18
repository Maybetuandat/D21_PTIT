/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07045_loaiphong;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07045_loaiphong {

    /**
     * @param args the command line arguments
     * @throws java.io.IOException
     */
   public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
    
}
