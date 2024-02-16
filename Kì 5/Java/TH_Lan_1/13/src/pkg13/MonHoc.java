/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg13;

/**
 *
 * @author Dell Gaming
 */
class MonHoc implements Comparable<MonHoc>{
        private String code, name, hinhthuc;

    public MonHoc(String code, String name, String hinhthuc) {
        this.code = code;
        this.name = name;
        this.hinhthuc = hinhthuc;
    }

    public String getCode() {
        return code;
    }
        
    public String toString(){
        return code + " " + name + " " + hinhthuc;
    }

    @Override
    public int compareTo(MonHoc o) {
         
        return code.compareTo(o.getCode());
         
    }
}
