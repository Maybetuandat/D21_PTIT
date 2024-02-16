/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg15;

import java.util.TreeSet;

/**
 *
 * @author Dell Gaming
 */
class WordSet {
     
      private TreeSet<String> a;
      public WordSet(String s){
           TreeSet<String> ans = new TreeSet<>();
          for(String x : s.toLowerCase().split("\\s+"))
              ans.add(x);
          this.a = ans;
      }

    public TreeSet<String> getA() {
        return a;
    }
      
      public String union(WordSet o)
      {
            String cmp = "";
              TreeSet<String> ans = new TreeSet<>();
              for(String x : o.getA())
                  ans.add(x);
              for(String x : a)
                  ans.add(x);
                for(String x : ans)
              cmp = cmp + x + " ";
          return cmp;
              
      }
      public String   intersection(WordSet o)
      {
          TreeSet<String> ans = new TreeSet<>();
          String cmp = "";
            for(String x : a)
            {
                if(o.getA().contains(x) )
                     ans.add(x);
            }
            for(String x : ans)
              cmp = cmp + x + " ";
          return cmp;
      }
      public String toString()
      {
          String cmp = "";
          for(String x : a)
              cmp = cmp + x + " ";
          return cmp;
      }
     
}
