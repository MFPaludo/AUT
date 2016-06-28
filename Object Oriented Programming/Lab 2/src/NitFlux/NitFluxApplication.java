package NitFlux;

import java.util.Scanner;

public class NitFluxApplication 
{

	public static void main(String[] args) 
	{
		Subscriber[] subs = new Subscriber[3];
		
		for (int i = 0; i < 3; i++)
		{
			System.out.println("Informations for subscriber: "+i);
			
			Scanner input = new Scanner(System.in);
			
			System.out.println("Enter your name: ");
			String name = input.nextLine();
			
			System.out.println("Enter your e-mail: ");
			String email = input.nextLine();
			
			System.out.println("How many months do you want to subscribe? ");
			int months = input.nextInt();
			
			System.out.println("How much do you want to pay each month? ");
			double pay = input.nextDouble();
			
			System.out.println("Enter your banking account number: ");
			int bank = input.nextInt();
			
			subs[i] = new Subscriber(name, email, months, pay, bank);
			
			double total = pay * months;
			
			System.out.println("Your total payment for the " + months + " months is: $" + (String.format("%1.2f", total)));
		}
		
	}

}
