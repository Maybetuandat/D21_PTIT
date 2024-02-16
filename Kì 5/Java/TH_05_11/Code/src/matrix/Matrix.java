/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package matrix;

/**
 *
 * @author Dell Gaming
 */
class Matrix {
      private int [][] a;
      private int n, m;

    public Matrix(int[][] a, int n, int m) {
        this.a = a;
        this.n = n;
        this.m = m;
    }
    public String toString()
    {
        String ans = "";
        for(int i=0; i<n; i++ )
        {
            String cmp = "";
            for(int j=0; j<m; j++)
            {
                cmp = cmp + a[i][j] + " ";
            }
            ans = ans + cmp.trim() + "\n";
        }
        return ans;
    }
}
