/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg2;

import java.util.TreeSet;

/**
 *
 * @author Dell Gaming
 */
class IntSet {
      private int [] a;

    public IntSet(int[] a) {
        this.a = a;
    }
      
    public IntSet union(IntSet b)
    {
        TreeSet<Integer> ts1 = new TreeSet<>();
        
        for(int x : a)
            ts1.add(x);
        for(int x : b.a)
            ts1.add(x);
       
        int n = ts1.size();
        int [] res = new int[ts1.size()];
        int index = 0;
        for(int x : ts1)
        {
            res[index] = x;
            index++;
        }
         IntSet cmp = new IntSet(res);
        return  cmp;
    }
    public String toString()
    {
        String cmp = "";
        for(int x : a)
        {
            cmp = cmp +x +  " ";
        }
        return cmp.trim();
    }
}
