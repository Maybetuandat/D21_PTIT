/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polygon;

/**
 *
 * @author Dell Gaming
 */
class Polygon {
    private Point[] p ;

    public Polygon(Point[] p) {
        this.p = p;
    }
    public String  getArea()
    {
        double are = 0;
        int n = p.length;
        for(int i=0; i<n; i++){
            int j = (i+1) % n;
            are += 0.5 * (p[i].getX() * p[j].getY() - p[i].getY() * p[j].getX());
        }
        return String.format("%.3f", are);
    }
}
