/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04009_dientichtamgiac;

/**
 *
 * @author Dell Gaming
 */
class Triangle {
      private Point a ,b, c;
      private String ans;
    public Triangle(Point a, Point b, Point c) {
        this.a = a;
        this.b = b;
        this.c = c;
        xuli();
    }
    void xuli()
    {
        double a1 = a.distance(b);
        double a2 = b.distance(c);
        double a3 = c.distance(a);
        if(a1 + a2 <= a3 || a1 + a3 <= a2 || a2 + a3 <= a1)
            ans = "INVALID";
        else
        {
            double cv = a1 + a2 + a3;
           ans =  String.format("%.2f", 0.25 * Math.sqrt(cv * (cv - 2 * a1) * (cv - 2 * a2) * (cv - 2 * a3)));
        }
         
        
    }
    public String toString(){
        return ans;
    }
}
