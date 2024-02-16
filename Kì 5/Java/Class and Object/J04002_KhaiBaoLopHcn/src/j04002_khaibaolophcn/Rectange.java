/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j04002_khaibaolophcn;

/**
 *
 * @author Dell Gaming
 */
public class Rectange {
          private double width, height;
          private String color;
          public Rectange(){
              width = 1;
              height = 1;
              
          }
          public Rectange(double width, double height, String color){
              this.width = width;
              this.height = height;
              this.color = color.substring(0, 1).toUpperCase() + color.substring(1).toLowerCase();
          }
          public double getWidth(){
              return width;
          }
          public double getHeight(){
              return height;
          }
          public void setWidth(double width){
              this.width = width;
          }
          public void getHeight(double height)
          {
              this.height = height;
          }

          public String getColor() {
             return color;
             }

         public void setColor(String color) {
             this.color = color;
         }
         public  double findArena(){
             return width * height;
         }
         public double findPerimeter(){
             return (width + height) * 2;
         }
          @Override
         public String toString()
         {
              return String.format("%d %d %s",(int) findPerimeter(), (int) findArena(), color);
             
         }
         
          
}
