/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07007_liet_ke_tu_khac_nhau;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*; 
/**
 *
 * @author Dell Gaming
 */
class WordSet {
    private String ans = "" ;
    private String file;

    public WordSet(String file) throws FileNotFoundException {
        this.file = file;
        xuli();
    }
    public void xuli() throws FileNotFoundException
    {
        Scanner sc= new Scanner(new File(file));
        TreeSet<String> st = new TreeSet<>();
         while(sc.hasNextLine())
        {
            String s = sc.nextLine();
            for(String x : s.toLowerCase().split(("\\s+")))
                st.add(x);
        }
         for(String x : st)
             ans = ans +  x + "\n";
    }
    @Override
    public String toString()
    {
        return ans;
    }
    
}
