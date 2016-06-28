/**
 * COMP503 Programming 2 Assignment 3 2016 S1
 *
 * This class provides methods to compute the amount the customer owes and check either or not the transaction can be completed
 * It has another method to clear the shopping cart
 *  
 * @author  Mateus Felipe Paludo - 14885857
 * @version 1.0 - 30.05.2016: Created
 */

public interface PaymentSystemFunctionality 
{
	//****************************************************************************************************
	//Checks the amount the user has and compares to the cost of the operation
	public Double amountOwing();
	
	//****************************************************************************************************
	//Completes the transaction by cleaning the cart
	public void completeTransaction();
}
