/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package filenhiphan;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;

/**
 *
 * @author Dell Gaming
 */
public class Filenhiphan {

    /**
     * @param args the command line arguments
     */
    public static int isprime[] = new int[1000009];
    public static int nmax = 1000000;
    public static void init()
    {
        isprime[0] = 1;
        isprime[1] = 1;
        for(int i=2; i<=Math.sqrt(nmax); i++ )
        {
            if(isprime[i] == 0)
            {
                for(int j=2; j<= nmax / i; j++)
                    isprime[i*j] = 1;
            }
        }
    }
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        // TODO code application logic here
        init();
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
        ArrayList<Integer> ds = (ArrayList<Integer>) in.readObject();
        Collections.sort(ds);
        for(int x : ds)
        {
            if(isprime[x] == 0 && x >= 100)
            {
                System.out.println(x);
                isprime[x] = 1;
            }
        }
        
    }
    
}
