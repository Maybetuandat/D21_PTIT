/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04021_wordset;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
class WordSet {
    private TreeSet<String> ts1;

    public WordSet(String s) {
        this.ts1 = new TreeSet<>();
        String [] cmp = s.trim().toLowerCase().split("\\s+");
        this.ts1.addAll(Arrays.asList(cmp));
    }
    public WordSet()
    {
        this.ts1 = new TreeSet<>();
    }
    public  WordSet union(WordSet o)
    {
        WordSet tmp = new WordSet();
        tmp.ts1.addAll(ts1);
        tmp.ts1.addAll(o.ts1);
   
        return tmp;
    }
    public WordSet intersection(WordSet o)
    {
        WordSet tmp = new WordSet();
        for(String x : this.ts1)
        {
            if(o.ts1.contains(x))
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
