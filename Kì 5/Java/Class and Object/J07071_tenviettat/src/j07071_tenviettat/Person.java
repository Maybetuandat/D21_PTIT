/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07071_tenviettat;

/**
 *
 * @author Dell Gaming
 */
class Person  implements Comparable<Person>{
        private String hoten, ten, ho, viettat;

    public Person(String hoten) {
        this.hoten = hoten;
        String []cmp = hoten.trim().split("\\s+");
        ho = cmp[0];
        ten = cmp[cmp.length - 1];
        viettat = "";
        for(int i=0; i<cmp.length-1; i++)
        {
            viettat += cmp[i].charAt(0)+ ".";
        }
        viettat += ten.charAt(0);
    }

    public String getHoten() {
        return hoten;
    }

    public String getViettat() {
        return viettat;
    }
    
    @Override
    public int compareTo(Person o) {
          if(ten.compareTo(o.ten) == 0)
          {
              return ho.compareTo(o.ho);
          }
          return ten.compareTo(o.ten);
    }
        
    public String toString()
    {
        return hoten;
    }
}
