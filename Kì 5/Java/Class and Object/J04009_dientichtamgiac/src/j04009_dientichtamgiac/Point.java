/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04009_dientichtamgiac;

/**
 *
 * @author Dell Gaming
 */
class Point {
    private double x,y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    public double distance( Point o){
        return Math.sqrt((x - o.x) * (x - o.x) + (y - o.y) * (y - o.y));
    }
}
