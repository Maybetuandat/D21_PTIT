package bai4;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.DecimalFormat;

public class BAI4 extends JFrame {

    private JTextField display;
    private double currentValue;
    private String currentOperation;

    public BAI4() {
        setTitle("Máy Tính Bỏ Túi");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(500, 600);
        setLocationRelativeTo(this);
        display = new JTextField();
        display.setEditable(false);
        Dimension textFieldSize = new Dimension(300, 100); 
        display.setPreferredSize(textFieldSize);
        display.setFont(new Font("Arial", 24, 30));
        add(display, BorderLayout.NORTH);
        JPanel buttonPanel = new JPanel(new GridLayout(5, 4));
        String []label = {"7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "0", ".", "=", "+", "AC"};

        for(String x : label)
        {
            addButton(buttonPanel, x);
        }
        add(buttonPanel, BorderLayout.CENTER);
        
        
        
      


        currentOperation = "";
        currentValue = 0;

    }
    
    
    
    private void addButton(JPanel panel, String label) {
        JButton button = new JButton(label);
        button.setFont(new Font("Arial", 24, 30));
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                onButtonClicked(label);
            }
        });
        panel.add(button);
    }

    
    
    private void onButtonClicked(String label) {
        switch (label) {
            case "0":
            case "1":
            case "2":
            case "3":
            case "4":
            case "5":
            case "6":
            case "7":
            case "8":
            case "9":
            case ".":
                display.setText(display.getText() + label);
                break;
            case "AC":
                display.setText("");
                break;
            case "+":
            case "-":
            case "*":
            case "/":
                currentOperation = label;
                currentValue = Double.parseDouble(display.getText());
                display.setText( "");
                break;
            case "=":
                if (!currentOperation.isEmpty() && !display.getText().isEmpty()) {
                    double newValue = Double.parseDouble(display.getText());
                    switch (currentOperation) {
                        case "+":
                            currentValue += newValue;
                            break;
                        case "-":
                            currentValue -= newValue;
                            break;
                        case "*":
                            currentValue *= newValue;
                            break;
                        case "/":
                            if (newValue != 0) {
                                currentValue /= newValue;
                            } else {
                                display.setText("Error");
                                return;
                            }
                            break;
                    }
                  
                        DecimalFormat decimalFormat = new DecimalFormat();
                        display.setText("" + decimalFormat.format(currentValue));
                   
                    currentOperation = "";
                }
                break;
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                BAI4 calculator = new BAI4();
                calculator.setVisible(true);
            }
        });
    }
}
