/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04011_bondiemtrenmatphang;

/**
 *
 * @author Dell Gaming
 */

class Point3D {
    private int x, y , z;

    public Point3D(int x, int y, int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public Point3D ()
    {
        
    }
    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int getZ() {
        return z;
    }
    
    public static  boolean check(Point3D p1, Point3D p2, Point3D p3, Point3D p4)
    {
        Vector a = new Vector(p1, p2);
        Vector b = new Vector(p2, p3);
        Vector c = a.tichcohuong(b);
        Vector d = new Vector(p1, p4);
        return c.tichvohuong(d) == 0;
    }

    
}
