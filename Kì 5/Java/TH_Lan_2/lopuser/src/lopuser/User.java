/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package lopuser;

/**
 *
 * @author Dell Gaming
 */
class User {
       private String  tendangnhap, matkhau;
       private int stt;
    public User(String tendangnhap, String matkhau, int stt) {
        this.tendangnhap = tendangnhap;
        this.matkhau = matkhau;
        this.stt = stt;
    }

    public String getTendangnhap() {
        return tendangnhap;
    }

    public String getMatkhau() {
        return matkhau;
    }

    public int getStt() {
        return stt;
    }
       
}
