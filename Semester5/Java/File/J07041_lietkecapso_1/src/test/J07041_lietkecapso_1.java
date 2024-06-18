/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package test;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class J07041_lietkecapso_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        
        
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Pair> ds1 = (ArrayList<Pair>) in1.readObject();
        Collections.sort(ds1);
        Map<String , Boolean> hs1 = new HashMap<>();
        for(Pair x : ds1)
        {
            if(x.getFirst() < x.getSecond())
            {
                if(!hs1.containsKey(x.toString()))
                {
                    System.out.println(x);
                    hs1.put(x.toString(), true);
                }
            }
        }
        
    }
    
}
