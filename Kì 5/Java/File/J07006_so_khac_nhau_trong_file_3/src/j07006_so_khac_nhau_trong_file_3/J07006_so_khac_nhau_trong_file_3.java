/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07006_so_khac_nhau_trong_file_3;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

/**
 *
 * @author Dell Gaming
 */
public class J07006_so_khac_nhau_trong_file_3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
 
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> ds = (ArrayList<Integer>) in.readObject();
        int []dem = new int[1005];
        for(int x : ds)
             dem[x] ++;
        for(int i=0; i<= 1000; i++)
        {
            if(dem[i] != 0)
            {
                System.out.println(i + " " + dem[i]);
            }
        }
        
    }
    
}
