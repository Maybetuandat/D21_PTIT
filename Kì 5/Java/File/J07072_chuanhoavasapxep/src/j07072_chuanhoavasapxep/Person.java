/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07072_chuanhoavasapxep;

/**
 *
 * @author Dell Gaming
 */
class Person  implements Comparable<Person>{
       private String hovaten, ten, ho, tendem;

    public Person(String hovaten) {
        this.hovaten = hovaten;
        String [] s = hovaten.split("\\s+");
        ten = s[s.length - 1];
        ho = s[0];
        String cmp = "";
        for(int i=1; i<s.length - 1; i++)
            cmp = cmp + s[i];
        tendem = cmp;
    }
    public String toString()
    {
        return hovaten;
    }

    @Override
    public int compareTo(Person o) {
           if(ten.compareTo(o.ten) == 0)
           {
               if(ho.compareTo(o.ho) == 0)
               {
                   return tendem.compareTo(o.tendem);
               }
               return ho.compareTo(o.ho);
           }
           return ten.compareTo(o.ten);
    }
    
}
