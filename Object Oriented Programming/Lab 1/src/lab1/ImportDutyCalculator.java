package lab1;

import java.util.Scanner;
public class ImportDutyCalculator 
{
	public final static double IMPORT_DUTY = 0.10;
	
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("What is the price of the item?");
		double price = keyboard.nextDouble();
		System.out.println("The import duty is: $"+price*IMPORT_DUTY);
	}
}
