/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package matrix;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class main {
      
      public static void main(String[] args) throws FileNotFoundException {
         Scanner sc = new Scanner(new File("MATRIX.in"));
         int t = sc.nextInt();
         while(t-- > 0)
         {
             int n= sc.nextInt();
             int m = sc.nextInt();
             int k = sc.nextInt();
             int [][] a = new int[n][m];
             ArrayList<Integer> ds = new ArrayList<>();
             int dem = 0;
             for(int i=0; i<n; i++)
             {
                 for(int j=0; j<m; j++)
                 {
                     a[i][j] = sc.nextInt();
                     dem++;
                     if(dem == k)
                         ds.add(a[i][j]);
                     if(dem == m)
                     {
                         dem = 0;
                     }
                 }
             }
             Collections.sort(ds);
             int index =0;
             for(int x : ds)
             {
                 a[index][k-1] = x;
                 index++;
             }
             Matrix x = new Matrix(a, n, m);
             System.out.println(x);
             
         }
    }
}
