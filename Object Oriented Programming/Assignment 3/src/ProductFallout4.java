/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class extends the Product class and initialises a Product object
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

public class ProductFallout4 extends Product
{
	//****************************************************************************************************
	//Empty constructor
	//The constructor initialises the object with pre-defined variable values
	public ProductFallout4()
	{
		this.product_code = 200; //Product code
		this.product_price = 100; //Product price
		this.product_name = "Fallout 4"; //Product name
		this.product_kind = ProductType.GAME; //Product type: (BOOK, GAME, or CONSOLE)
		
		//Method to set either or not the product is expensive
		if (this.product_price > 200) this.is_expensive = true; //If the product costs more than 200 dollars it is expensive
		else this.is_expensive = false; //If it is 500 dollars or less, it is not expensive
	}
}
