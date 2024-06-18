/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg11;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

/**
 *
 * @author Dell Gaming
 */
public class Main {

    /**
     * @param args the command line arguments
     */
   public static String convert(String s){
        String res="";
        for(char x: s.toCharArray()){ 
            if(x=='0'||x=='1') res+=Character.toString(x);
        }
        return res;
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException{
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String>a = (ArrayList<String>)in.readObject();
        for(String s: a){ 
            String s1 = convert(s);
            long x = Long.parseLong(s1, 2);
            System.out.println(s1 + " " + x);
        }
    }
    
}
