package bai5;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.imageio.ImageIO;
import java.io.File;
import java.io.IOException;
import java.awt.image.BufferedImage;

public class BAI5 extends JFrame {
    private JPanel imagePanel;
    private JButton openButton;
    private JFileChooser fileChooser;

    public BAI5 (){
        setTitle("Image Viewer");
        setSize(800, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(this);
        imagePanel = new JPanel();
        openButton = new JButton("Open Image");
        fileChooser = new JFileChooser();
        fileChooser.setMultiSelectionEnabled(true);

        openButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int returnValue = fileChooser.showOpenDialog(null);
                if (returnValue == JFileChooser.APPROVE_OPTION) {
                    File[] selectedFiles = fileChooser.getSelectedFiles();
                    displayImages(selectedFiles);
                }
            }
        });

        setLayout(new BorderLayout());
        add(imagePanel, BorderLayout.CENTER);
        add(openButton, BorderLayout.SOUTH);

        setVisible(true);
    }

    private void displayImages(File[] imageFiles) {
        imagePanel.removeAll();

        for (File imageFile : imageFiles) {
            try {
                BufferedImage image = ImageIO.read(imageFile);
                ImageIcon icon = new ImageIcon(image);
                JLabel label = new JLabel(icon);
                imagePanel.add(label);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        imagePanel.revalidate();
        imagePanel.repaint();
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new BAI5();
            }
        });
    }
}
