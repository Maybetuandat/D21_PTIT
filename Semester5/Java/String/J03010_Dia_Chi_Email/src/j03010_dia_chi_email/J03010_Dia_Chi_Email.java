/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j03010_dia_chi_email;

import java.util.*;

/**
 *
 * @author Dell Gaming
 */
public class J03010_Dia_Chi_Email {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        HashMap<String, Integer> a = new HashMap<>();
        while(t-- > 0){
            String[] s =   sc.nextLine().trim().toLowerCase().split("\\s+");
            int n = s.length;
            String cmp = s[n-1];
            for(int i=0; i<n-1; i++)
                cmp += s[i].charAt(0);
            int count = 1;
            if(a.get(cmp) != null)
            {
                    count = a.get(cmp) + 1;

            }
                        a.put(cmp, count);
            if(count == 1){
                
                System.out.println(cmp + "@ptit.edu.vn");
            }
            else{
                System.out.println(cmp + "" + count + "@ptit.edu.vn");
            }
        }
    }
    
}
