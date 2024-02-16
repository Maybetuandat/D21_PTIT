/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai6;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
/**
 *
 * @author Dell Gaming
 */
public class GCD_and_LCM extends JFrame implements ActionListener{
        private JLabel lb1, lb2, lb3, lb4, lb5, lb6;
        private JButton bt1, bt2;
        private JTextField jt1, jt2;
        private void setactionbt1(int index)
        {
            if(index  == 0)
            {
                 lb4.setText("");
                 lb6.setText("");
            }
                
            jt1.setText("");
            jt2.setText("");   
            jt1.requestFocus();
        }
        private void setlocation(JLabel x)
        {
             x.setHorizontalAlignment(JLabel.CENTER);
             x.setVerticalAlignment(JLabel.CENTER);
        }
        private void  init()
        {
            setTitle("GCD and LCM");
            setSize(400, 300);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLocationRelativeTo(this);
            setLayout(new GridLayout(5, 2));
            lb1 = new JLabel("Số Thứ Nhất ");
            setlocation(lb1);
            add(lb1);
            jt1 = new JTextField();
            add(jt1);
            lb2 = new JLabel("Số Thứ Hai");
            setlocation(lb2);
            add(lb2);
            jt2 = new JTextField();
            add(jt2);
            lb3 = new JLabel("GCD");
            setlocation(lb3);
            add(lb3);                                                              
            lb4 = new JLabel();
            setlocation(lb4);
            add(lb4);
            lb5 = new JLabel("LCM");
            setlocation(lb5);
            add(lb5);
            lb6 = new JLabel();
            setlocation(lb6);
            add(lb6);
            bt1 = new JButton("Redo");
            add(bt1);
            bt2 = new JButton("Calculator"); 
            add(bt2);
            bt1.addActionListener((ActionEvent e) -> {
                setactionbt1(0);
            });
            bt2.addActionListener((ActionEvent e) -> {
                int a, b;   
                try 
                   {
                        a = Integer.parseInt(jt1.getText());
                        b = Integer.parseInt(jt2.getText());
                        if(a <= 0 || b <= 0)
                        {
                            lb4.setForeground(Color.red);
                            lb4.setText("Nhap Lai ! ");
                            setactionbt1(1);
                           
                        }
                        else
                        {
                            lb4.setForeground(Color.BLUE);
                            lb4.setText("" + ucln(a, b));
                            lb6.setForeground(Color.BLUE);
                            lb6.setText("" + bcnn(a, b));
                            
                        }
                       
                   } 
                   catch (NumberFormatException t) 
                   {
                    lb4.setForeground(Color.red);
                    lb4.setText("Nhap Lai ! ");
                    setactionbt1(1);
                   
                   }
            });
            
            
        }
        public GCD_and_LCM()
        {
            init();
        }
        public static int ucln(int a, int b)
        {
             int du = 0;
             while(b != 0)
             {
                 du = a % b;
                 a = b;
                 b = du;
             }
             return a;
        }
        public static int  bcnn(int a, int b)
        {
            int x = ucln(a, b);
            int ans = (a * b) / x;
            return ans;
        }
        public static void main(String[] args) {
        
            GCD_and_LCM  a = new GCD_and_LCM();
            a.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
} 
