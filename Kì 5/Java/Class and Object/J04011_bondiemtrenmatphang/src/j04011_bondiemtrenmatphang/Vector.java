/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04011_bondiemtrenmatphang;

/**
 *
 * @author Dell Gaming
 */
class Vector {
    private int x, y, z;
    public Vector(Point3D a, Point3D b )
    {
        this.x = a.getX() - b.getX();
        this.y = a.getY() - b.getY();
        this.z = a.getZ() - b.getZ();
    }
    public Vector()
    {
        this.x = 0;
        this.y = 0;
        this.z = 0;
    }
    public Vector tichcohuong(Vector o)
    {
        Vector tmp = new Vector();
        tmp.x = this.y * o.z - this.z * o.y;
        tmp.y = this.z * o.x - o.z * this.x;
        tmp.z = this.x * o.y - this.y * o.x;
        return tmp;
    }
    public int tichvohuong(Vector o)
    {
        return x * o.x + y * o.y + z * o.z;
    }
   
    
}
