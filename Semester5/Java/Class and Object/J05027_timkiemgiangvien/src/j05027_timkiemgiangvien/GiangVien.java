/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j05027_timkiemgiangvien;

/**
 *
 * @author Dell Gaming
 */
class GiangVien {
    private String magv, tengv, tenmon;

    public GiangVien(String tengv, String tenmon, int i) {
        this.tengv = tengv;
        this.magv = String.format("GV%02d", i);
        this.tenmon = "";
        String []cmp = tenmon.split("\\s+");
        for(String x: cmp)
        {
            this.tenmon += x.substring(0, 1).toUpperCase();
        }
        
    }

    public String getTengv() {
        return tengv.toLowerCase();
    }
    
    public String toString()
    {
        return magv + " " + tengv + " " + tenmon;
    }
            
                       
}
