/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pkg14;

/**
 *
 * @author Dell Gaming
 */
class DeTai {
        private String tengv, tendetai, madetai;

    public DeTai(String gv, String tendetai, int i) {
        this.tengv = gv;
        this.tendetai = tendetai;
        if (i < 10)
           this.madetai = "DT00" + String.valueOf(i);
           else if(i >= 10 && i <= 99)
               this.madetai = "DT0" + String.valueOf(i);
           else
               this.madetai = "DT" + String.valueOf(i);
    }

    public String getTendetai() {
        return tendetai;
    }

    public String getMadetai() {
        return madetai;
    }

    public String getGv() {
        return tengv;
    }
    
        
}
