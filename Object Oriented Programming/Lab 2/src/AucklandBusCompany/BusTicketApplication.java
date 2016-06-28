package AucklandBusCompany;

import java.util.Scanner;

public class BusTicketApplication 
{

	private static Person aPerson;

	public static void main(String[] args) 
	{
		int discount = 0;
		
		Scanner input = new Scanner(System.in);
		
		aPerson = new Person(0, false, (char) 0, 0);
		
		if (aPerson.age > 65)
		{
			discount = 100;
		}
		else if (aPerson.gender == 'F' && aPerson.isStudent && aPerson.age > 40)
		{
			discount = 75;
		}
		else if (aPerson.isStudent && aPerson.age > 10 && aPerson.age < 20)
		{
			discount = 50;
		}
		else if ((aPerson.weight % 2) == 0)
		{
			discount = 25;
		}
		else if ((aPerson.weight % 2) != 0)
		{
			discount = 15;
		}
		else
		{
			System.out.println("Are you an alien? How is that even possible?");
		}
		
		System.out.println("Your discount is " + discount + "%");
	}

}
