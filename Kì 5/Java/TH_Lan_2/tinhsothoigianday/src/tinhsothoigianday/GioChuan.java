/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package tinhsothoigianday;

/**
 *
 * @author Dell Gaming
 */
class GioChuan {
      private String ten;
      private Double time;

    public GioChuan(String ten, Double time) {
        this.ten = ten;
        this.time = time;
    }
      public String toString()
      {
          return ten + " " + String.format("%.2f", time);
      }
}
