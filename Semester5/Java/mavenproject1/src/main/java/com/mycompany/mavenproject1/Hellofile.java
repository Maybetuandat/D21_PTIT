/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author Dell Gaming
 */
public class Hellofile {
    public static void main(String[] args) throws FileNotFoundException{
  
        Scanner sc = new Scanner(new File("Hello.txt"));
        while (sc.hasNextLine()) {
        String data = sc.nextLine();
        System.out.println(data);
      }
      
                
                
    }
}
