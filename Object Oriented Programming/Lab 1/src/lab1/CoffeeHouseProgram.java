package lab1;

import java.util.Scanner;

public class CoffeeHouseProgram 
{
	public static void main(String[] args) 
	{
		System.out.println("-----------------------------------------------------");
		String heading = String.format("%25s %11s %11s", "SMALL", "MEDIUM", "LARGE");
		System.out.println(heading);
		System.out.println("-----------------------------------------------------");
		String line1 = String.format("%2s %12s %8s %10s %12s", "1.", "Long Black", "1.10", "1.38", "1.93");
		System.out.println(line1);
		String line2 = String.format("%2s %12s %8s %10s %12s", "2.", "Short Black", "2.20", "2.75", "3.85");
		System.out.println(line2);
		String line3 = String.format("%2s %12s %8s %10s %12s", "3.", "Cappuccino", "3.30", "4.13", "5.78");
		System.out.println(line3);
		String line4 = String.format("%2s %12s %8s %10s %12s", "4.", "Latte", "4.40", "5.50", "7.70");
		System.out.println(line4);
		System.out.println("-----------------------------------------------------");
		
		System.out.println("Please enter a number 1 - 4 and press enter.");
		Scanner number = new Scanner(System.in);
		int itemnumber = number.nextInt();
		if(itemnumber < 1 || itemnumber > 4)
		{
			System.out.println("I'm sorry Dave, I'm afraid I can't do that. Please, user, restar the program.");
		}
		else
		{
		
			System.out.println("Please enter the size: S, M or L. Then press enter.");
			Scanner size = new Scanner(System.in);
			char sizeletter = size.next().charAt(0);
		
			float smallCost = 1.1f * itemnumber; //f because is integer
			float mediumCost = 1.25f * smallCost;
			float largeCost = 1.75f * smallCost;
			
			double cost = 0;
		
			if(sizeletter == 'S' || sizeletter == 's')
			{
				cost = smallCost;
				System.out.println(String.format("The cost is: %1.2f", smallCost));
			}
			else if(sizeletter == 'M' || sizeletter == 'm')
			{
				cost = mediumCost;
				System.out.println(String.format("The cost is: %1.2f", mediumCost));
			}
			else if(sizeletter == 'L' || sizeletter == 'l')
			{
				cost = largeCost;
				System.out.println(String.format("The cost is: %1.2f", largeCost));
			}
			else
			{
				System.out.println("I'm sorry Dave, I'm afraid I can't do that. Please, user, restar the program.");
			}
		
			System.out.println("Please, input the payment amount.");
			Scanner moneyin = new Scanner(System.in);
			float clientmoney = moneyin.nextFloat();
			
			while(cost > clientmoney)
			{
				System.out.println("HA HA! You can't afford it, give more money!");
				System.out.println("Please, input the payment amount.");
				clientmoney = moneyin.nextFloat();
			}
			
			double change = clientmoney - cost%1.2f;
			System.out.println(String.format("Your change is: %1.2f", change));
		}
	}
}
