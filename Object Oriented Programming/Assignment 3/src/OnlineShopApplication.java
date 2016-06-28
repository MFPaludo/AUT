/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class provides the interaction between the customer and an Online Shop object
 * Provides menu interactions that allows the user to:
 * 		Add a product to the cart
 * 		View the products in the cart
 * 		Finalise the purchase
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

//Imports java utilities to be used in the program
import java.util.*;
import java.io.*;
import java.lang.*;




public class OnlineShopApplication 
{
	//Starts a new Scanner as a global variable
	public static Scanner input = new Scanner(System.in);
	
	//****************************************************************************************************
	//Main method
	public static void main(String[] args)
	{
		//Calls the method that will generate the products database
		ProductDatabase products_database = generateSampleDatabase();
		
		//Reads the purchase-history file
		System.out.println("Reading purchase transcript: purchase-history.txt");
		
		//Creates a shopping cart which will store the products bought by the user
		OnlineShop shopping_cart = new OnlineShop();
		
		//Variable that holds user choice
		int user_choice = 1;
		
		do
		{
			//Prints the menu and asks for user input
			user_choice = menu_choice();
			
			//Will take the action based on user's input
			//If the user input 1
			if (user_choice == 1)
			{
				//It will add a product to the cart
				//Calls the function to print the products and puts user's choice in a variable
				product_choice(products_database, shopping_cart);
				
			}
			//If the user input 2
			else if (user_choice == 2)
			{
				//It will output the shopping cart
				print_products(shopping_cart);
			}
			//If the user input 3
			else if (user_choice == 3)
			{
				//It will finalise the purchase, if the user has enough money
				finalise_purchase(products_database, shopping_cart);
			}
			
			//If the user input 4, just go through
		}
		while (user_choice != 4);
		
		System.out.println("Thank you for using the online shop");
	}
	
	//****************************************************************************************************
	//Generates a product database
	private static ProductDatabase generateSampleDatabase()
	{
		//Generates a new Products database
		ProductDatabase products_database = new ProductDatabase();
		
		//Returns a products_database
		return products_database;
	}
	
	//****************************************************************************************************
	//Prints the menu and asks for user input
	private static int menu_choice()
	{
		//Prints the menu and ask for user input
		System.out.println("------------------------------------------------");
		System.out.println("Online Shop functionality");
		System.out.println("1. Add product to cart");
		System.out.println("2. View your shopping cart");
		System.out.println("3. Finalise purchases");
		System.out.println("4. Quit");
		System.out.println("Please choose a menu item: (1-4)");
		
		//Takes input from the user and computes it into an int variable
		int choice = input.nextInt();
		
		//Returns users input
		return choice;
	}
	
	//****************************************************************************************************
	//Prints the products
	private static void product_choice(ProductDatabase products_database, OnlineShop shopping_cart)
	{
		//Prints the menu and ask for user input
		System.out.println("------------------------------------------------");
		System.out.println("Please select a product from the menu");
		System.out.println(products_database); //Function that prints the menu
		System.out.println("Please choose a menu item: (1-5)");
		
		//Takes input from the user and computes it into an int variable
		int choice = input.nextInt() - 1;
		
		//Creates a new product
		Product cart_product = products_database.get_products_array().get(choice);
		
		//Prints a message that says that the product is being added to the cart
		System.out.println("Adding " + cart_product + " to your cart");
		
		//Adds the product to the cart
		shopping_cart.add_product(cart_product);
	}
	
	
	//****************************************************************************************************
	//Prints the products in the cart
	private static void print_products(OnlineShop shopping_cart)
	{
		//Checks if the cart is empty
		if (shopping_cart.get_products().isEmpty())
		{
			//If the cart is empty, it will print a message
			System.out.println("You don't have products in your cart, you should buy some stuff."); //I'm sorry Dave, I'm afraid I can't do that
		}
		//If the cart is not empty
		else
		{
			//Prints the contents of the cart
			System.out.println("------------------------------------------------");
			System.out.println("Contents of your cart");
			System.out.println(shopping_cart);
		}
	}
	
	//****************************************************************************************************
	//PaymentSystem functionality
	//Finalise purchases 
	//Check if the customer can afford the objects
	public static void finalise_purchase(ProductDatabase products_database, OnlineShop shopping_cart)
	{
		//Variable that stores the user's choice
		int user_choice;
		
		//Checks if the cart is empty
		if (shopping_cart.get_products().isEmpty())
		{
			//If the cart is empty, it will print a message
			System.out.println("You don't have products in your cart, you should buy some stuff."); //I'm sorry Dave, I'm afraid I can't do that
		}
		//If the cart is not empty
		else
		{
			//Prints the contents of the cart
			System.out.println("------------------------------------------------");
			System.out.println("Contents of your cart");
			System.out.println(shopping_cart);
			//Prints the total amount
			String.format("Total amount owing: $%1.2f", shopping_cart.amountOwing());
			
			//Asks the user if he/she wants to pay full ammount
			System.out.println("Pay full amount?");
			System.out.println("1. Yes");
			System.out.println("2. No, back to main menu");
			System.out.println("Please choose a menu item: (1-2)");
			
			//Computes user's input
			user_choice = input.nextInt();
			
			//If the user decided to finish the payment
			if (user_choice == 1)
			{
				//Prints a message and calls the function to clear the cart
				System.out.println("Thank you for your purchase.");
				shopping_cart.completeTransaction();
				
				//String with file name
				String filename = "products_database";
				
				//Creates the Product History
				//PurchaseHistory(products_database, filename);
			}
			//If the user decided to go back to the menu
			else
			{
				//Completes the purchase and clears the cart
				System.out.println("Payment not completed, going back to the menu");
			}
		}
	}
	
	//****************************************************************************************************
	//Reads the purchase-history.txt file
	//The file contains the purchase history of four customers
	public static HashSet<PurchaseHistory> PurchaseHistory(ProductDatabase products_database, String file_name) throws IOException
		{
		//Creates a HashSet to store the files data as a PurchaseHistory array
		HashSet<PurchaseHistory> purchase_history_hashset = new HashSet<PurchaseHistory>();
		
		//Defines exceptions
		FileReader file_reader = new FileReader(file_name);
		BufferedReader buffered_reader = new BufferedReader(file_reader);
		
		//Sets the string line to null
		String line;
		
		//Will try reading the file
		while ((line = buffered_reader.readLine()) != null)
		{
			//Creates an ArrayList for the purchases
			ArrayList<Product> purchases = new ArrayList<Product>();
			
			//Sets the number of purchases as the number in the line
			int number_of_purchases = new Integer(line);
			
			//Reads the following lines and populates the array of products
			for (int i = 0; i < number_of_purchases; i++)
			{
				//Takes the code in the line
				Integer code = new Integer(buffered_reader.readLine());
				
				//Assigns the product code according to the ProductDatabase
				if (code == 865)
				{
					code = 0;
				}
				else if (code == 199)
				{
					code = 1;
				}
				else if (code == 200)
				{
					code = 2;
				}
				else if (code == 123)
				{
					code = 3;
				}
				else
				{
					code =4;
				}

				//Creates a new product using the code
				Product product = products_database.get_products_array().get(code);
			}
			
			//Creates a purchase history object with the arraylist
			PurchaseHistory purchase_history = new PurchaseHistory();
			purchases = purchase_history.get_purchase_history();
			
			purchase_history_hashset.add(purchase_history);
		}
		
		return null;
	}
	
	//****************************************************************************************************
	//After finalizing the purchases, the customer gets product suggestions based on what they have purchased
	
}
