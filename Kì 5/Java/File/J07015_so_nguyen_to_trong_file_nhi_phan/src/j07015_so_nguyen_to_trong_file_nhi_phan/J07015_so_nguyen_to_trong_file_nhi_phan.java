/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07015_so_nguyen_to_trong_file_nhi_phan;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07015_so_nguyen_to_trong_file_nhi_phan {

    /**
     * @param args the command line arguments
     * @throws java.io.FileNotFoundException
     * @throws java.lang.ClassNotFoundException
     */
    public static int [] isprime = new int[10006];
    public static  void init()
    {
        isprime[1] = 1;
        for(int i=2; i<= Math.sqrt(10006); i++){
            if(isprime[i] == 0)
            {
                for(int j=2; j<= 10006 / i; j++)
                {
                    isprime[i*j] = 1;
                }
            }
        }
    }
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
        ArrayList<Integer> ds = (ArrayList<Integer>) in.readObject();
        int a[] = new int[10005];
        init();
        for(int x: ds){
            a[x] ++;
        }
        for(int i=0; i<10000; i++){
            if(a[i] > 0 && isprime[i] == 0)
            {
                System.out.println(i + " " + a[i]);
            }
        }
        
    }
    
}
