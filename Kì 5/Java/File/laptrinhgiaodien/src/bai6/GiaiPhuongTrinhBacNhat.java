/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai6;

import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DecimalFormat;
import javax.swing.*;

/**
 *
 * @author Dell Gaming
 */
public  class GiaiPhuongTrinhBacNhat  extends JFrame implements ActionListener{
        private JLabel lb1, lb2, lb3, lb4;
        private JButton bt1, bt2;
        private JTextField jt1, jt2;
        private void setactionbt1(int index)
        {
            if(index  == 0)
            {
                 lb4.setText("");
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
            setTitle("Phương Trình Bậc Nhất");
            setSize(400, 300);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLocationRelativeTo(this);
            setLayout(new GridLayout(4, 2));
            lb1 = new JLabel("a");
            setlocation(lb1);
            add(lb1);
            jt1 = new JTextField();
            add(jt1);
            lb2 = new JLabel("b");
            setlocation(lb2);
            add(lb2);
            jt2 = new JTextField();
            add(jt2);
            lb3 = new JLabel("x");
            setlocation(lb3);
            add(lb3);
            lb4 = new JLabel();
            add(lb4);
            setlocation(lb4);
            bt1 = new JButton("Redo");
            add(bt1);
            bt2 = new JButton("Calculator"); 
            add(bt2);
            bt1.addActionListener((ActionEvent e) -> {
                setactionbt1(0);
            });
            bt2.addActionListener((ActionEvent e) -> {
                double n1, n2;
                try {
                    n1= Double.parseDouble(jt1.getText());
                    n2= Double.parseDouble(jt2.getText());
                    if(n1 == 0)
                    {
                        if( n2  == 0)
                        {
                            lb4.setForeground(Color.BLUE);
                            lb4.setText("Vô Số Nghiệm");
                           
                            
                        }
                        else
                        {
                            lb4.setForeground(Color.RED);
                            lb4.setText("Vô Nghiệm");
                        }
                    }
                    else
                    {
                        lb4.setForeground(Color.BLUE);
                        DecimalFormat decimalFormat = new DecimalFormat();
                        lb4.setText("" + decimalFormat.format(-n2 / n1));
                    }
                } catch (NumberFormatException x1) {
                    lb4.setForeground(Color.red);
                    lb4.setText("Hãy Nhập Số ! ");
                    setactionbt1(1);
                }
            });
            
            
        }
        public GiaiPhuongTrinhBacNhat()
        {
            init();
        }
        public static void main(String[] args) {
        
            GiaiPhuongTrinhBacNhat  a = new GiaiPhuongTrinhBacNhat();
            a.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
    }

    
}
