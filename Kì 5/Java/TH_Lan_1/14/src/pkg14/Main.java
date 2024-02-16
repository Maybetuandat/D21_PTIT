/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg14;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner in1 = new Scanner(new File("SINHVIEN.in"));
         Scanner in2 = new Scanner(new File("DETAI.in"));
          Scanner in3 = new Scanner(new File("NHIEMVU.in"));
          ArrayList<SinhVien> sv = new ArrayList<>();
          int t = Integer.parseInt(in1.nextLine());
          while(t-- > 0){
              sv.add(new SinhVien(in1.nextLine(), in1.nextLine(), in1.nextLine(), in1.nextLine()));
          }
         ArrayList<DeTai> detai = new ArrayList<>();
         t = Integer.parseInt(in2.nextLine());
         for(int i=1; i<=t; i++)
         {
              detai.add(new DeTai(in2.nextLine(), in2.nextLine(), i));
         }
         t = in3.nextInt();
         while(t-- > 0){
             String msv = in3.next();
             String madetai = in3.next();
             for(SinhVien x : sv)
             {
                 if(x.getMsv().compareTo(msv) == 0)
                 {
                     for(DeTai a : detai)
                     {
                         if(madetai.compareTo(a.getMadetai()) == 0)
                         {
                             x.setMadetai(a.getMadetai());
                             x.setTendetai(a.getTendetai());
                             x.setTengv(a.getGv());
                             break;
                         }
                     }
                    break;
                 }
                 
             }
             
         }
         Collections.sort(sv);
         for(SinhVien x : sv)
         {
             System.out.println(x);
         }
    }
    
}
