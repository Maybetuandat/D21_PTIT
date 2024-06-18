/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05026_danhsachgiangvientheobomon;

/**
 *
 * @author Dell Gaming
 */
class GiangVien {
        private String tengv, magv, tenbomon, bomonviettat;

    public GiangVien(String tengv, String tenbomon, int i) {
        this.tengv = tengv;
        this.tenbomon = tenbomon;
        this.magv = String.format("GV%02d", i);
        String []s = tenbomon.trim().split("\\s+");
        this.bomonviettat ="";
        for (String x : s)
            this.bomonviettat = this.bomonviettat + x.substring(0, 1).toUpperCase();
        
        
    }

    public String getBomonviettat() {
        return bomonviettat;
    }
    
    public String toString()
    {
        return magv + " " + tengv + " " + bomonviettat;
    }
        
}
