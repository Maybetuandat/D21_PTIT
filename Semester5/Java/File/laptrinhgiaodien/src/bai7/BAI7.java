package bai7;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import javax.swing.table.DefaultTableModel;
import java.util.*;
import java.util.logging.Level;
import java.util.logging.Logger;
class Student implements Comparable<Student>{
    private String masv, hovaten, lop, email, diachi;
    private int age;
    public Student(String masv, String hovaten, String lop, String email, String diachi, int age) {
        this.masv = masv;
        this.hovaten = hovaten;
        this.lop = lop;
        this.email = email;
        this.diachi = diachi;
        this.age = age;
    }
    public Object [] toObject()
    {
        return new Object [] {masv, hovaten, lop, email, diachi, age};
    }
    @Override
    public int compareTo(Student o) {
        return (int) (age - o.age);
    }
}

public class BAI7 extends JFrame {
    private DefaultTableModel tableModel;
    private JTable table;
    private ArrayList<Student> studentList;
    private void readfile() throws FileNotFoundException
    {
        Scanner sc = new Scanner(new File("STUDENT.in"));
        studentList = new ArrayList<>();
        int n = Integer.parseInt(sc.nextLine());
        while(n-- > 0)
        {
            studentList.add(new Student(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
        }
    }
    public BAI7() throws FileNotFoundException {
        super("Quản Lý Sinh Viên ");
        readfile();
        tableModel = new DefaultTableModel();
        table = new JTable(tableModel);
        JButton readFromFileButton = new JButton("Read From File");
        JButton sortButton = new JButton("Sort");
        setLayout(new BorderLayout());
        add(new JScrollPane(table), BorderLayout.CENTER);
        add(readFromFileButton, BorderLayout.NORTH);
        add(sortButton, BorderLayout.SOUTH);
        tableModel.addColumn("Mã Sinh Viên");
        tableModel.addColumn("Tên");
         tableModel.addColumn("Lớp");
        tableModel.addColumn("Email");
         tableModel.addColumn("Địa Chỉ");
        tableModel.addColumn("Tuổi");
        readFromFileButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    readfile();
                } catch (FileNotFoundException ex) {
                    Logger.getLogger(BAI7.class.getName()).log(Level.SEVERE, null, ex);
                }
                refreshTable();
            }
        });

        sortButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Collections.sort(studentList);
                refreshTable();
            }
        });
        setSize(1400, 500);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setVisible(true);
    }

    private void refreshTable() 
    {
        tableModel.setRowCount(0);
        for (Student x : studentList) 
        {
            Object[] rowData = x.toObject();
            tableModel.addRow(rowData);
            
        }
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                try 
                {
                        new BAI7();
                } 
                catch (FileNotFoundException ex) {
                    Logger.getLogger(BAI7.class.getName()).log(Level.SEVERE, null, ex);
                }
            }
        });
    }
}