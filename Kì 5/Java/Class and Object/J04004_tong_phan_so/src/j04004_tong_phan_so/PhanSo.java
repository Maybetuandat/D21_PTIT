/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04004_tong_phan_so;

/**
 *
 * @author Dell Gaming
 */
class PhanSo {
    private long  tu, mau;
    long Gcd(long a, long b)
    {
        if(b == 0)
            return a;
        return Gcd(b, a % b);
    }
    long Lcm(long a, long b)
    {
        return (a * b) / Gcd(a, b);
    }
    void RutGon()
    {
        long x = Gcd(tu,mau);
        this.tu = this.tu / x;
        this.mau = this.mau / x;
    }

    public long getMau() {
        return mau;
    }

    public long getTu() {
        return tu;
    }
    
    public PhanSo(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
        RutGon();
    }
    public String add(PhanSo p)
    {
        long x = Lcm(mau,p.getMau() );
        long y = tu * (x / mau) + p.getTu() * (x / p.getMau());
        long adu = Gcd(x, y);
        x = x / adu;
        y = y / adu;
        return y + "/" + x;
    }
    
    
    
    
}
