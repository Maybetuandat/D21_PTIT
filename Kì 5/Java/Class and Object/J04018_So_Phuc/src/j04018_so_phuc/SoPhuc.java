/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04018_so_phuc;

/**
 *
 * @author Dell Gaming
 */
class SoPhuc {
      private int real, im;
      

    public SoPhuc(int real, int im) {
        this.im = im;
        this.real = real;
    }
    public SoPhuc tich(SoPhuc o)
    {
        SoPhuc cmp = new SoPhuc(0, 0);
        cmp.real = this.real * (this.real + o.real) - this.im * (this.im + o.im);
        cmp.im = this.real * (this.im + o.im) + (this.real + o.real) * this.im;
        return cmp;
    }
    public SoPhuc binhPhuong(SoPhuc o){
         SoPhuc cmp = new SoPhuc(0, 0);
         cmp.real = (this.real + o.real) * (this.real + o.real) - (this.im + o.im) * (this.im + o.im);
         cmp.im = 2 * (this.real + o.real ) * (this.im + o.im);
         return cmp;
    }
    public String toString()
    {
        String cmp = real + " ";
        if(im > 0){
            cmp = cmp + "+ " + im+"i";
        }
        else
            cmp = cmp + "- " + (-1 * im) + "i";
        return cmp;
        
    }
}
