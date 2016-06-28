/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class extends the Product class and initialises a Product object
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

public class ProductTheEndOfEternity extends Product
{
	//****************************************************************************************************
	//Empty constructor
	//The constructor initialises the object with pre-defined variable values
	public ProductTheEndOfEternity()
	{
		this.product_code = 865; //Product code
		this.product_price = 30; //Product price
		this.product_name = "The End of Eternity (Isaac Asimov)"; //Product name
		this.product_kind = ProductType.BOOK; //Product type: (BOOK, GAME, or CONSOLE)
		
		//Method to set either or not the product is expensive
		if (this.product_price > 200) this.is_expensive = true; //If the product costs more than 200 dollars it is expensive
		else this.is_expensive = false; //If it is 500 dollars or less, it is not expensive
	}
}
