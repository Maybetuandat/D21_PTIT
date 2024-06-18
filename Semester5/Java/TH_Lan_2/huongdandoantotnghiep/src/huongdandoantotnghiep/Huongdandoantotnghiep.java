/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package huongdandoantotnghiep;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Huongdandoantotnghiep {

    /**
     * @param args the command line arguments
     */
   public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
        Scanner sc = new Scanner(new File ("DANHSACH.in"));
        ArrayList<SinhVien> ds = new ArrayList<>();
        while(sc.hasNextLine())
        {
            ds.add(new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
       Scanner in1 = new Scanner(new File("HUONGDAN.in"));
       int t = Integer.parseInt(in1.nextLine());
       ArrayList<HuongDan> res = new ArrayList<>();
       while(t-- > 0)
       {
           
           String []s = in1.nextLine().split("\\s+");
           int adu = Integer.parseInt(s[s.length - 1 ]);
           
           //lay ra ten giao vien
           String ten ="";
           for(int i=0; i<s.length-1; i++)
               ten= ten + s[i] + " ";
           ten = ten.trim();
           
           // duyet tim hoc sinh
           for(int i=0; i<adu; i++)
           {
               String []ans = in1.nextLine().split("\\s+");
               //ans[0] la masv
               String tendetai = "";
               for(int j=1; j<ans.length; j++)
                   tendetai = tendetai + ans[j] + " ";
               tendetai= tendetai.trim();
               for(SinhVien x : ds)
               {
                   if(ans[0].equals(x.getMasv()))
                   {
                      res.add(new HuongDan( x.getMasv(), x.getHoten(), ten, tendetai, x.getPhone()));              
                   }
               }
           }
           
          }
       Collections.sort(res);
       for(HuongDan x : res)
       {
           System.out.println(x);
       }
    }
    
}
