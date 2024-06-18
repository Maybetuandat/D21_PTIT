/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07074_lichgiangdaytheomonhoc;

/**
 *
 * @author Dell Gaming
 */
class LichGD implements Comparable<LichGD>{
    private String manhom, mamon, tengv, phonghoc, tenmon;
    private int ngaygiangday, kip;
    public static int num = 0;
    public LichGD(String mamon, String ngaygiangday,String kip,  String tengv, String phonghoc, String tenmon) {
        num++;
        manhom = String.format("HP%03d", num);
        this.mamon = mamon;
        this.kip = Integer.parseInt(kip);
        this.ngaygiangday = Integer.parseInt(ngaygiangday);
        this.tengv = tengv;
        this.phonghoc = phonghoc;
        this.tenmon = tenmon;
    }

    public String getMamon() {
        return mamon;
    }

    
    public String toString ()
    {
        return manhom + " " + ngaygiangday + " " + kip + " " + tengv + " " + phonghoc;
    }

    @Override
    public int compareTo(LichGD o) {
         if(ngaygiangday == o.ngaygiangday)
         {
                if(kip == o.kip)
                {
                    return tengv.compareTo(o.tengv);
                }
                return (int)(kip - o.kip);
         }
         return (int) ( ngaygiangday - o.ngaygiangday);
    }
}
