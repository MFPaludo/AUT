package lab1;

import java.util.Scanner; //tell Java to load Scanner class
public class GreetingApplication 
{
	public static void main(String args[])
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("What is your name?");
		System.out.println("Hello "+keyboard.nextLine());
	}
}
