/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class is an abstract class
 * It stores a blueprint of product methods and variables
 * The product's code and price are stored as Integer variables
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

abstract public class Product 
{
	//Creates variables to be used in the product objects
	protected Integer product_code;
	protected Integer product_price;
	//Object attributes
	protected String product_name;
	protected ProductType product_kind; //enum variable that holds the type of product
	protected boolean is_expensive; //more than 200 dollars

	
	//****************************************************************************************************
	//Overrides the original toString method that gives a representation of the object
	//In the output example, the following object representation is given: "Rubik's Cube, size: 4 (123) price: $10.00"
	//It gives the name of the product, size or color, code, and price
	//I decided to do not use size or color, but a product style
	public String toString()
	{
		return 
				this.product_kind + ": " + this.product_name + " (" + this.product_code + ") - Price: $" + this.product_price + ".00";
	}
	
	//****************************************************************************************************
	//Constructor model
	//Empty constructor
	//The constructor initialises the object with pre-defined variable values
	/*public Product()
	{
		this.product_code = 000; //Product code
		this.product_price = 500; //Product price
		this.product_name = "Name"; //Product name
		this.product_kind = ProductType.BOOK; //Product type: (BOOK, GAME, or CONSOLE)
		
		//Method to set either or not the product is expensive
		if (this.product_price > 200) this.is_expensive = true; //If the product costs more than 200 dollars it is expensive
		else this.is_expensive = false; //If it is 500 dollars or less, it is not expensive
	}*/
	
	//****************************************************************************************************
	//Implement Comparable interface in order to compare products
	
	//****************************************************************************************************
	//Returns the product's price
	public double get_price()
	{
		return this.product_price;
	}
}
