/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class stores an array containing the items in the user's cart
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

//Imports Java utilities to be used in the class
import java.util.ArrayList;
import java.util.Collections;

public class OnlineShop implements PaymentSystemFunctionality
{
	//Array with products in the cart
	private ArrayList<Product> products_cart;
	
	//****************************************************************************************************
	//toString method that overrides the original method
	public String toString()
	{
				//Iterates through the products array
				for (Product product : products_cart)
				{
					//Prints the products
					System.out.println(product);
				}
		return  "";
	}
	
	//****************************************************************************************************
	//Constructor that initialises the cart
	public OnlineShop()
	{
		products_cart = new ArrayList<Product>();
	}
	
	//****************************************************************************************************
	//Get method to return the products in the array
	public ArrayList<Product> get_products()
	{
		return products_cart;
	}
	
	//****************************************************************************************************
	//Adds products to the shopping cart
	public void add_product(Product new_product)
	{
		products_cart.add(new_product);
	}

	//****************************************************************************************************
	//Returns the cost of all items in the cart
	@Override
	public Double amountOwing() 
	{
		//Sets the cost to 0
		double cost = 0;
		
		//Iterates through the products array
		for (Product product : products_cart)
		{
			//Adds the cost of the product to the variable
			cost += product.get_price();
		}
		
		//Returns the total cost
		return cost;
	}

	//****************************************************************************************************
	//Clears the products in the cart
	@Override
	public void completeTransaction() 
	{
		//Simply takes all items out of the cart
		products_cart.clear();
	}
}
