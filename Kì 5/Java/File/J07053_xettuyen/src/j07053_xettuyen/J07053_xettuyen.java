/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07053_xettuyen;
import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07053_xettuyen {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File("XETTUYEN.in"));
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<XetTuyen> ds = new ArrayList<>();
        boolean check1 = true, check2 = true;
        while( t-- > 0)
        {
            XetTuyen a  = new XetTuyen(sc.nextLine(), sc.nextLine(), Double.parseDouble(sc.nextLine()), Double.parseDouble(sc.nextLine()));
            if(a.getDiemthuchanh() < 8 || a.getDiemlythuyet()  < 8)
                check1 = false;
            if(a.getDiemthuchanh() < 7.5 || a.getDiemlythuyet()  < 7.5)
                check2 = false;
            if(check1 == true)
            {
                a.setDiemtrungbinh(1);
            }
            else 
            { 
                if(check2 == true) 
                  a.setDiemtrungbinh(0.5);
                else
                    a.setDiemtrungbinh(0);
            }
            check1 = true;
            check2 = true;
            ds.add(a);
        }
        
        for(XetTuyen x : ds)
        {
            System.out.println(x);
        }
        
        
    }
    
}
