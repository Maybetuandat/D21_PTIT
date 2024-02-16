/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07005_so_khac_nhau_trong_file;

import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;

/**
 *
 * @author Dell Gaming
 */
public class J07005_so_khac_nhau_trong_file {

    /**
     * @param args the command line arguments
     * @throws java.io.IOException
     */
    public static void main(String[] args) throws IOException {
        // TODO code application logic here
        DataInputStream in = new DataInputStream(new FileInputStream("DATA.IN"));
        int [] dem = new int[1005];
        for(int i=0; i<100000; i++){
            dem[ in.readInt()]++;
        }
        for(int i=0; i<1000; i++)
            if(dem[i] != 0)
            {
                System.out.println(i + " "+ dem[i]);
            }
    }
    
}
