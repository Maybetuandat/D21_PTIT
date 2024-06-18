/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ICPC;

/**
 *
 * @author Dell Gaming
 */
class Team  implements Comparable<Team>{
         private String name, school, sott;

    public Team(String name, String school) {
        this.name = name;
        this.school = school;
    }

    public void setSott(String sott) {
        this.sott = sott;
    }
    
    @Override
    public int compareTo(Team o) {
        if(school.compareTo(o.school) == 0)
        {
            return name.compareTo(o.name);
        }
        return   school.compareTo(o.school);
    }
    public String toString()
    {
        return sott + " " + name + " " + school;
    }
}
