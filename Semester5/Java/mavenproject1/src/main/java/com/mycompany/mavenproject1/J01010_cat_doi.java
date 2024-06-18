/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

import java.util.Scanner;
/**
 *
 * @author Dell Gaming
 */
public class J01010_cat_doi {
    public static Boolean check(char ch){
        if(ch == '0' || ch == '1' || ch == '8' | ch == '9')
            return true;
        return false;
    }
    public static void xuli(String s){
        String ans ="";
       for(int i=0; i<s.length(); i++){
           if(!check(s.charAt(i))){
               System.out.println("INVALID");
               return;
           }
           else{
               if(s.charAt(i) == '8' || s.charAt(i) == '9'){
                   ans = ans + '0';
               }
                   
               else  ans = ans + s.charAt(i);
               }
                    
           }  
       while(ans.charAt(0) == '0' && ans.length() > 1)
           ans = ans.substring(1, ans.length());
       if(ans.equals("0"))
            System.out.println("INVALID");
       else
            System.out.println(ans);
     
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            xuli(s);
        }
    }
}