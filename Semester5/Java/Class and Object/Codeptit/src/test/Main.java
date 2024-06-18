package test;
import java.io.*;
public class Main
{
	public static void main(String[] args) throws IOException {
		BufferedWriter write = new BufferedWriter(new FileWriter("Datdeptrai.txt"));
		String s = "dat dep trai vcl";
		write.write(s);
		write.close();
	}
}