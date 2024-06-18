/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04003_PhanSo;

/**
 *
 * @author Dell Gaming
 */
public class PhanSo {
        private long tu,mau;

    public PhanSo(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
       RutGon();
    }

    @Override
    public String toString() {
        return tu + "/" + mau;
    }
        
    private  long  gcd(long a, long b)
    {
        long du = 0;
        while( b != 0){
            du = a % b;
            a = b;
            b = du;
      
        }
        return a;
    }
    private void RutGon(){
        long x = gcd(tu, mau);
        tu /= x;
        mau /= x;
    }
}
