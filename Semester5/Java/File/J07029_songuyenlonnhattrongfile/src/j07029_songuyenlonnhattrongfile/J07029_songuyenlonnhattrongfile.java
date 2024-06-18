/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07029_songuyenlonnhattrongfile;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07029_songuyenlonnhattrongfile {

    /**
     * @param args the command line arguments
     */
    
    public static int nmax = (int) 1e6;
    public static int []isprime = new int[nmax + 9];
    public static void init()
    {
        isprime[1] = 1;
        isprime[0] = 1;
        for(int i=2; i<= Math.sqrt(nmax); i++)
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
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer>  ds = (ArrayList<Integer>) in.readObject();
        int [] dem = new int[nmax + 9];
        for(int x : ds)
            dem[x]++;
        int count = 0;
        for(int i = nmax - 1; i >= 2; i-- )
        {
            if(count == 10)
                break;
            if(isprime[i] == 0 && dem[i] != 0 )
            {
                count++;
                System.out.println(i + " " + dem[i]);
            }
        }
        
    }
    
}
