/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package code;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class bai2 {
        public static boolean check(String s)
        {
            for(int i=0; i<s.length() - 1; i++)
            {
                if(s.charAt(i+1) > s.charAt(i))
                    return false;
            }
            return true;
        }
        public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
            ObjectInputStream file1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
            ObjectInputStream file2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
            ArrayList<Integer> ds2 = (ArrayList<Integer>) file2.readObject();
            ArrayList<Integer> ds1 = (ArrayList<Integer>) file1.readObject();
            int []dem1 = new int[10009];
            int []dem2 = new int[10009];
            for(int x : ds1)
            {
                dem1[x]++;
            }
            for(int x : ds2)
            {
                dem2[x]++;
            }
            for(int i=10; i<10000; i++)
            {
                if(check(String.valueOf(i)))
                {
                    System.out.println(i + " "+ dem1[i] + " " + dem2[i]);
                }
            }
    }
}
