package lab1;

import java.util.Scanner;
public class ManyNumberAverage 
{
	public static void main(String args[])
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("How many numbers would you like to input?");
		int number = keyboard.nextInt();
		System.out.println("Remember to press the button ENTER on the keyboard after typing each number.");
		int sum = 0;
		for(int a = 1; a <= number; a++)
		{
			System.out.println("Enter number " +a+ ":");
			sum = sum+ keyboard.nextInt();
		}
		double average = ((double) sum) / number; 
		System.out.println("The average is:" +average);
	}
}
