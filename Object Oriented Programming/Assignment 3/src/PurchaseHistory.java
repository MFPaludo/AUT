/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class models the purchase history of a customer.
 * Contains an ArrayList of prodduct objects, supplied by the constructor.
 * The class has a single get method for the ArrayList.
 * The class has no set or other updating methods.
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

//Imports the array list utility
import java.util.ArrayList;

public class PurchaseHistory 
{
	//Array variable that holds an array of products
	private ArrayList<Product> products_array;
	
	//****************************************************************************************************
	//Constructor for the purchase history
	public PurchaseHistory()
	{
		products_array = new ArrayList<Product>();
	}
	
	//****************************************************************************************************
	//Get method that returns the purchase history as an array
	public ArrayList<Product> get_purchase_history()
	{
		//Returns the products array
		return products_array;
	}
	
	//****************************************************************************************************
	//Adds products to the history
	public void add_product(Product new_product)
	{
		products_array.add(new_product);
	}
}
