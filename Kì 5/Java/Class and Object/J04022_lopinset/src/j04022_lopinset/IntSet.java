/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04022_lopinset;

import java.util.*;

/**
 *
 * @author Dell Gaming
 */
class IntSet {
    private TreeSet<Integer> ts1;

    public IntSet(int a[]) {
        ts1 = new TreeSet<>();
        for(int x : a)
        {
            ts1.add(x);
        }
    }

    public IntSet() {
        ts1 = new TreeSet<>();
    }
    public IntSet union(IntSet o)
    {
        IntSet tmp = new IntSet();
        tmp.ts1.addAll(o.ts1);
        tmp.ts1.addAll(ts1);
        return tmp;
    }
    public String toString()
    {
        String cmp = "";
        for(int x : ts1)
        {
            cmp = cmp + x + " ";
        }
        return cmp.trim();
    }
     
}
