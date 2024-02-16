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
public class SoNguyenTo extends JFrame implements ActionListener{
        private JLabel lb1, lb2;
        private JButton bt1, bt2;
        private JTextField jt1;
        private void setactionbt1()
        {
            jt1.setText("");
            jt1.requestFocus();
        }
        private void setlocation(JLabel x)
        {
             x.setHorizontalAlignment(JLabel.CENTER);
             x.setVerticalAlignment(JLabel.CENTER);
        }
        private void  init()
        {
            setTitle("Số Nguyên Tố");
            setSize(400, 300);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLocationRelativeTo(this);
            setLayout(new GridLayout(3, 2));
            lb1 = new JLabel("Nhập vào: ");
            setlocation(lb1);
            add(lb1);
            jt1 = new JTextField();
            add(jt1);
            JLabel x = new JLabel("Kết Quả ");
            setlocation(x);
            add(x);
            lb2 = new JLabel();
            add(lb2);
            setlocation(lb2);
            add(lb2);
            bt1 = new JButton("Redo");
            add(bt1);
            bt2 = new JButton("Calculator"); 
            add(bt2);
            bt1.addActionListener((ActionEvent e) -> {
                setactionbt1();
            });
            bt2.addActionListener((ActionEvent e) -> {
                int a;   
                try 
                   {
                        a = Integer.parseInt(jt1.getText());
                        lb2.setForeground(Color.BLUE);
                        lb2.setText(isprime(a));
                       
                   } 
                   catch (NumberFormatException t) 
                   {
                    lb2.setForeground(Color.red);
                    lb2.setText("Nhap Lai ! ");
                    setactionbt1();
                   }
            });
            
            
        }
        public SoNguyenTo()
        {
            init();
        }
        public static String isprime(int n)
        {
            String s1 = "Không Phải Số Nguyên Tố";
            String s2 = "Số Nguyên Tố";
            if( n <= 1)
            {
                return  s1;
            }
            for(int i=2; i<= Math.sqrt(n); i++)
            {
                if( n % i == 0)
                {
                    return s1;
                }
            }
            return s2;
        }
        public static void main(String[] args) {
        
            SoNguyenTo  a = new SoNguyenTo();
            a.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }
} 
