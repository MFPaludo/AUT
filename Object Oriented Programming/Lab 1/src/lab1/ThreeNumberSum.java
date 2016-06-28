package lab1;

import java.util.Scanner;
public class ThreeNumberSum 
{
	public static void main(String args[])
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Please enter three numbers and press ENTER on the keyboard after each one");
		int number1 = keyboard.nextInt();
		int number2 = keyboard.nextInt();
		int number3 = keyboard.nextInt();
		int result = number1+number2+number3;
		System.out.println("The sum of the three numbers is: " + result);
	}
}
