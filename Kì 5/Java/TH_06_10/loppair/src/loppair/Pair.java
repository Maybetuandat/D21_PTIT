/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package loppair;

/**
 *
 * @author Dell Gaming
 */
class Pair<T, S> {
      private T first;
      private S second;

    public Pair(T firstElement, S secondElement) {
        first = firstElement;
        second = secondElement;
    }
    public Boolean check(Integer n)
    {
        for(int i=2; i<= Math.sqrt(n); i++)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }
    public boolean isPrime(){
        return check((Integer)first) && check((Integer)second);
    }
    public String toString(){
        return first + " " + second;
    }
      
      
}
