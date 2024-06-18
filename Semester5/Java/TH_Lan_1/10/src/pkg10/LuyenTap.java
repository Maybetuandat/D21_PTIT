/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg10;

/**
 *
 * @author Dell Gaming
 */
class LuyenTap implements  Comparable<LuyenTap>{
       private String name;
       private int ac, submit;

    public LuyenTap(String name, String s) {
        this.name = name;
        String [] adu = s.split("\\s+");
        this.ac = Integer.parseInt(adu[0]);
        this.submit = Integer.parseInt(adu[1]);
    }

    public int getAc() {
        return ac;
    }

    public int getSubmit() {
        return submit;
    }

    public String getName() {
        return name;
    }
    
    @Override
    public int compareTo(LuyenTap o) {
         if(ac  - o.getAc() == 0)
         {
             if(submit - o.getSubmit() == 0)
                 return name.compareTo(o.getName());
             else
                 return (submit - o.submit);
         }
         return -1 * (ac - o.ac);
         
                
    }
    public String toString()
    {
        return name + " " + ac + " " + submit;
    }
        
       
}
