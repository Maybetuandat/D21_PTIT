/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package lopuser;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class Lopuser {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        ArrayList<User> ds = new ArrayList<>();
        int n = sc.nextInt();
        for(int i=0; i<n; i++)
        {
            ds.add(new User(sc.next(), sc.next(), i));
        }
        int m = sc.nextInt();
        int []dem = new int[n ];
        while(m-- > 0)
        {
            String ten = sc.next();
            String mk = sc.next();
            for(User x : ds)
            {
                if(ten.compareTo(x.getTendangnhap()) == 0)
                {
                    if(mk.compareTo(x.getMatkhau()) == 0)
                    {
                        dem[x.getStt()]++;
                    }
                    break;
                }
            }
        }
        for(int x : dem)
        {
            System.out.print(x + " ");
        }
    }
    
}
