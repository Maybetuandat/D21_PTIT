/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg8;

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
   public static int kiemtra (int x){
        String s = x + "";
        if(s.length()<2) return 0;
        for(int i = 0;i<s.length() - 1;i++){
            if((s.charAt(i + 1) - '0') < (s.charAt(i) - '0')) return 0;
        }
        return 1;
    }

    /**
     *
     * @param args
     * @throws IOException
     * @throws ClassNotFoundException
     */
    public static void main(String[] args) throws IOException, ClassNotFoundException{
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ArrayList<Integer>a = (ArrayList<Integer>)in1.readObject();
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer>b = (ArrayList<Integer>)in2.readObject();
        int []dem1 = new int[10009]; int []dem2 = new int[10009];
        for(int x: a){
            if(kiemtra(x)==1) dem1[x]++;
        }
        for(int x: b){
            if(kiemtra(x)==1) dem2[x]++;
        }
        for(int i = 10;i<=9999;i++){
            if(dem1[i]!=0 && dem2[i]!=0) System.out.println(i + " " + dem1[i] + " " + dem2[i]);
        }
    }
    
}
