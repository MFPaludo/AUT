package TheCoinChangerMachine;

import java.util.Scanner;

public class CoinChangerApplication 
{

	public static void main(String[] args) 
	{
		//Creates the object
		CoinChanger aCoin = new CoinChanger(0, 0, 0, 0, 0);
		
		//Char for the repeat command
		char repeat = 'Y';
		
		//repeat method
		do
		{
			System.out.println("Welcome to the Coin Changer Machine. Please input your coins:");
			
			//declares the scanner
			Scanner input = new Scanner(System.in);
			
			//Asks the user to input the coins
			System.out.println("Number of 10c coins: ");
			aCoin.setTen(input.nextInt());
			
			System.out.println("Number of 20c coins: ");
			aCoin.setTwenty(input.nextInt());
			
			System.out.println("Number of 50c coins: ");
			aCoin.setFifty(input.nextInt());
			
			System.out.println("Number of dollars coins: ");
			aCoin.setOneDollar(input.nextInt());
			
			System.out.println("Number of two dollar coins: ");
			aCoin.setTwoDollar(input.nextInt());
			
			//Prints the object
			System.out.println(aCoin);
			
			//Asks if the user wants to continue
			System.out.println("Would you like to continue? ");
			repeat = input.next().charAt(0);
			
		} while (repeat == 'Y');
	}

}
