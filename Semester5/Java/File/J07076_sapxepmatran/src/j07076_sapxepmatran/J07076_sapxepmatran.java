/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package j07076_sapxepmatran;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
/**
 *
 * @author Dell Gaming
 */
public class J07076_sapxepmatran {

   
    
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here
         Scanner sc = new Scanner(new File("MATRIX.in"));
        int t = sc.nextInt();
        while(t-- > 0)
        {
          int n  = sc.nextInt();
          int m = sc.nextInt();
          int k = sc.nextInt();
          int [][] a = new int[n+1][m+1];
          ArrayList<Integer> ds = new ArrayList<>();
          for(int i=1; i<=n; i++)
          {
              for(int j=1; j<=m; j++)
              {
                  a[i][j] = sc.nextInt();
                  if(j == k)
                      ds.add(a[i][j]);
                      
              }
          }
          Collections.sort(ds);
          int index = 1;
          for(int x : ds)
          {
              a[index][k] = x;
              index++;
          }
          for(int i=1; i<=n; i++)
          {
              for(int j=1; j<=m; j++)
              {
                  System.out.print(a[i][j] + " ");
              }
              System.out.println("");
          }
        }
    }
    
}
