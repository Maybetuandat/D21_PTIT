/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04021_lopintset;

import java.util.TreeSet;

/**
 *
 * @author Dell Gaming
 */
class IntSet {
       private TreeSet<Integer> ts = new TreeSet<>();
      
    public IntSet(int[] a) {
        for(int x : a)
            ts.add(x);
       
    }
    public IntSet(TreeSet<Integer> ts)
    {
        this.ts = ts;
    }
    public IntSet  union(IntSet o)
    {
        TreeSet<Integer> ts1 = new TreeSet<>();
        ts1.addAll(ts);
        ts1.addAll(o.ts);
        return new IntSet(ts1);
    }
    public String toString()
    {
        String cmp = "";
        for(int x : ts)
            cmp = cmp + x + " ";
        return cmp.trim();
            
    }
}
