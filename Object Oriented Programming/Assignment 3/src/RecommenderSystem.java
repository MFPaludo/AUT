/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class has 
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

//Imports array lists and hash set functionalities
import java.util.HashSet;
import java.util.ArrayList;

public class RecommenderSystem 
{
	//Creates variables to be used in the class
	private ProductDatabase product_database;
	//Set containing customer purchases history objects
	private HashSet<PurchaseHistory> products_history_hashset;
	
	//****************************************************************************************************
	//Constructor
	//Initializes both instance variables
	public RecommenderSystem(ProductDatabase product_database, HashSet<PurchaseHistory> products_history_hashset)
	{
		this.product_database = product_database;
		this.products_history_hashset = products_history_hashset;
	}
	
	//****************************************************************************************************
	//Set method with customer purchase history objects
	
	//****************************************************************************************************
	//Method that returns a list of recommended products considering the example in the assignment brief
	public static ArrayList<Product> recommended_products(ArrayList<Product> cart, int items_frequency)
	{
		//ArrayList with inputs for shopping cart and frequency
		//ArrayList<Product> praAlgorithm(ArrayList<Product> cart, int freq);
		
		return null;
	}
}
