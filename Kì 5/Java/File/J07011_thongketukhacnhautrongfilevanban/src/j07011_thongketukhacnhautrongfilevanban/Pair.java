/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07011_thongketukhacnhautrongfilevanban;

/**
 *
 * @author Dell Gaming
 */
class Pair implements Comparable<Pair>{
      private String xau;
      private long dem;

    public Pair(String xau, long  dem) {
        this.xau = xau.trim();
        this.dem = dem;
    }

    @Override
    public int compareTo(Pair o) {
         if(dem == o.dem)
         {
             return xau.compareTo(o.xau);
         }
         return (int)(o.dem - dem);
    }
    public String toString()
    {
        return xau + " " + dem;
    }
      
}
