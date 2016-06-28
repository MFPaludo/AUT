package Example;

import java.util.InputMismatchException;
import java.util.Scanner;

public class UserInput 
{

	public static void main(String[] args) 
	{
		int number = 0;
		Scanner keyboard = new Scanner(System.in);
		
		boolean done = false;
		
		while(!done)
		{
			System.out.println("Please enter a number bbetween 1 and 10");
			
			try
			{
				number = keyboard.nextInt();
			}
			catch(InputMismatchException e)
			{
				keyboard.nextLine();
				System.out.println("Sorry, please enter only numbers!");
			}
			
			done = ((number >= 1) && (number <= 10));
		}
		
		System.out.println("You entered the number: " +number);

	}

}
