/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package baophuc;

/**
 *
 * @author Dell Gaming
 */
public class Baophuc {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        TapChi t = new TapChi();
        t.setMa();
        System.out.println(t);
        Sach s = new Sach("LT HDH", "Nguyen manh Son", "giao duc", 220, 1000);
        s.setMa();
        System.out.println(s);
    }
    
}
