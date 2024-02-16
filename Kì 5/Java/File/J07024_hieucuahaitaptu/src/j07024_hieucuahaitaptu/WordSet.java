/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07024_hieucuahaitaptu;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
class WordSet {
       private TreeSet<String> ts1;

    public WordSet(String file) throws FileNotFoundException 
    {
        
        Scanner sc = new Scanner(new File(file));
        ts1 = new TreeSet<>();
        while(sc.hasNext())
        {
            ts1.add(sc.next().toLowerCase());
        }
    }

    public WordSet() {
        ts1 = new TreeSet<>();
    }
    
    public WordSet difference(WordSet o)
    {
        WordSet tmp = new WordSet();
        for(String x : ts1)
        {
            if(!o.ts1.contains(x))
            {
                tmp.ts1.add(x);
            }
        }
        return tmp;
    }
    public String toString()
    {
        String cmp = "";
        for(String x : ts1)
        {
            cmp = cmp + x + " ";
        }
        return cmp.trim();
    }
       
}
