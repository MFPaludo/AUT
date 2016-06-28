/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class has a HashMap collection
 * 		a constructor that initialises the HashMap
 * 		a toString Method
 * 		a functionality that adds products to the database
 * Products can not be removed from the database
 * 
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

//Imports uitilities for the program
import java.util.HashMap;
import java.util.Map;
import java.util.ArrayList;

public class ProductDatabase 
{
	//HashMap that maps the product codes to Product objects
	private HashMap<Integer, Product> products_collection = new HashMap<Integer, Product>();
	
	//****************************************************************************************************
	//Overrides the original toString method that gives a representation of the object
	//It returns a representation of all the products
	public String toString()
	{
		return
				"1 " + products_collection.get(865) + "\n" +
				"2 " + products_collection.get(199) + "\n" +
				"3 " + products_collection.get(200) + "\n" +
				"4 " + products_collection.get(123) + "\n" +
				"5 " + products_collection.get(187) + "\n";
	}
	
	//****************************************************************************************************
	//Empty constructor that calls the initialise_hash_map()
	public ProductDatabase()
	{
		initialise_hash_map();
	}
	
	//****************************************************************************************************
	//Method to initialise the HashMap
	private HashMap initialise_hash_map()
	{
		products_collection.put(123, new ProductXOne());
		products_collection.put(187, new Product3DS());
		products_collection.put(199, new ProductWitcher3());
		products_collection.put(200, new ProductFallout4());
		products_collection.put(865, new ProductTheEndOfEternity());

		return products_collection;
	}

	public ArrayList<Product> get_products_array() 
	{
		ArrayList<Product> products_collection = new ArrayList<Product>(this.products_collection.values());
		return products_collection;
	}
	
	//****************************************************************************************************
	//Functionality for adding products to the database and returning products stored in the database in an ArrayList
}
