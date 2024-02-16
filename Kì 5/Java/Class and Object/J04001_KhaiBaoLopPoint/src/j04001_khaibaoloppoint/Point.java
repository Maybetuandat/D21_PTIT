/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04001_khaibaoloppoint;

/**
 *
 * @author Dell Gaming
 */
public class Point {
     private double x, y;

        public Point(double x, double y){
            this.x = x;
            this.y = y;
        }
        public double distance(Point a)
        {
            return Math.sqrt(Math.pow(this.x - a.x,2) + Math.pow(this.y - a.y, 2 )); 
        }
}
