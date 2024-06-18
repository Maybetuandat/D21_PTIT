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
public class J07042_lietkecapso2 {

    
    public static boolean check(int a, int b)
    {
        int du = 0;
        while(b != 0)
        {
            du = a % b;
            a = b;
            b = du;
        }
        
        return a == 1;
    }
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Pair> ds1 = (ArrayList<Pair>) in1.readObject();
//        Scanner sc = new Scanner(System.in);
//        ArrayList<Pair> ds1 = new ArrayList<>();
//        int n = sc.nextInt();
//        for(int i=0; i<n; i++)
//        {
//            int x = sc.nextInt();
//            int y = sc.nextInt();
//            ds1.add(new Pair(x, y));
//        }
        Collections.sort(ds1);
        Map<String, Boolean> hs1 = new HashMap<>();
        for(Pair x : ds1)
        {
            if(x.getFirst() < x.getSecond()&& check(x.getFirst(), x.getSecond()) == true  && !hs1.containsKey(x.toString()) )
            {
                    System.out.println(x.toString());
                     hs1.put(x.toString(), true);
            }
        }
       
                
    }
    
}
