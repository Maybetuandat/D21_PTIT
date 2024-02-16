/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07081_sapxepdanhsachsinhvien;

/**
 *
 * @author Dell Gaming
 */
class SinhVien implements Comparable<SinhVien>{
       private String masv, hovaten, sodt, email;
       private String ho, ten, tendem;

    public SinhVien(String masv, String hovaten, String sodt, String email) {
        this.masv = masv;
        this.hovaten = hovaten;
        this.sodt = sodt;
        this.email = email;
        String [] s = hovaten.split("\\s+");
        this.ten = s[s.length - 1];
        this.ho = s[0];
        String cmp = "";
        for(int i=1; i <s.length - 1; i++)
            cmp += s[i] + " ";
        this.tendem = cmp.trim();
        
    }
   
    @Override
    public int compareTo(SinhVien o) {
            if(ten.compareTo(o.ten) == 0)
            {
                if(ho.compareTo(o.ho) == 0)
                {
                    if(tendem.compareTo(o.tendem) == 0)
                    {
                        return masv.compareTo(o.masv);
                    }
                    return tendem.compareTo(o.tendem);
                }
                return ho.compareTo(o.ho);
            }
            return ten.compareTo(o.ten);
    }
       @Override
     public String toString()
    {
        return masv + " " + hovaten + " " + sodt + " " + email;
    }

}
