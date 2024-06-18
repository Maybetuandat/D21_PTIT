/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07014_hopvagiaocuahaifilevanban;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
class WordSet {
       private String file;
       private TreeSet<String> ts;

    public WordSet(String file) throws FileNotFoundException {
        this.file = file;
        ts  = new TreeSet<>();
        xuli();
    }

    public WordSet() 
    {
        ts = new TreeSet<>();
    }
    
    private void xuli() throws FileNotFoundException
    {
        Scanner sc = new Scanner(new File(file));
        while(sc.hasNext())
        {
            ts.add(sc.next().toLowerCase());
        }
        
    }
    public WordSet union(WordSet o)
    {
         WordSet tmp = new WordSet();
         for(String x : ts)
         {
             tmp.ts.add(x);
         }
         for(String x : o.ts)
         {
             tmp.ts.add(x);
         }
         return tmp;
    }
    public WordSet intersection(WordSet o)
    {
         WordSet tmp = new WordSet();
         for(String x : ts)
         {
             if(o.ts.contains(x))
             {
                 tmp.ts.add(x);
             }
         }
         return tmp; 
    }
    public String toString()
    {
        String cmp = "";
        for(String x : ts)
        {
            cmp = cmp + x + " ";
        }
        return cmp.trim();
    }
}
