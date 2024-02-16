/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j02024_dayconcotongle;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J02024_dayconcotongle {

    /**
     * @param args the command line arguments
     */
    public static  Scanner sc = new Scanner(System.in);
    public static void xuli(int n)
    {
        Integer [] a = new Integer[n ];
        for(int i=0; i<n; i++)
            a[i] = sc.nextInt();
       Arrays.sort(a, (Integer a1, Integer a2) -> a2 - a1); // Sắp xếp theo thứ tự giảm dần
       int [] np = new int[n+1];
       while(true)
       {
           // xu li xau nhi phan ke tiep
           int k = n;
           while(k > 0 && np[k] == 1)
           {
               np[k] = 0;
               k--;
           }
           if(k  == 0)
               break;
           np[k]++;
           int sum  = 0;
           for(int i=1; i<=n; i++)
           {
               sum += np[i] * a[i - 1];
           }
           if(sum % 2  ==  1)
           {
               String cmp = "";
               for(int i=1; i<=n; i++)
               {
                   if(np[i] == 1)
                   {
                       cmp  = cmp + String.valueOf(a[i-1])  + " ";
                   }
               }
               System.out.println(cmp);
           }
       }
      
    }
    public static void main(String[] args) {
        // TODO code application logic here
       
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            xuli(n);
        }
    }
    
}
