/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package danhsachcanh;

/**
 *
 * @author Dell Gaming
 */
class Pair<T0, T1> {
      private T0 first;
      private T1 second;

    public Pair(T0 first, T1 second) {
        this.first = first;
        this.second = second;
    }
      
    public String toString(){
        return "(" + first + ","+second +")";
    }
}
