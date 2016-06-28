package Ticket;

public class TicketCustomer 
{
	//introduces the variables
	private String name;
	private int age;
	private boolean isStudent;
	
	//this toString method represents the customer object
	public String toString()
	{
	return
			//is the customer a student ? "Yes, do it" : "No, do it"
			"CUSTOMER DETAILS: " + this.name + " age: " + this.age + " Student? " + (this.isStudent ? "Yes" : "No")
			+ "\n" + 
			//returns the final price of the ticket using the get method
			//the String.format gives the decimal ccurrent format for currency
			String.format("TOTAL COST: $%1.2f", cost())
			+ "\n" + 
			"------------------------------------------------------------";
	}
	
	//constructor with inputs for name, age and student
	public TicketCustomer(String name, int age, boolean isStudent)
	{
		this.name = name;
		this.age = age;
		this.isStudent = isStudent;
	}
	
	//private variables needs get and set methods to be used
	public String getName()
	{
		return this.name;
	}
	
	public int getAge()
	{
		return this.age;
	}
	
	public boolean getStudent()
	{
		return this.isStudent;
	}
	
	//method double price to calculate the ticket's cost
	public double cost()
	{
		//initiates the price variable
		double price = 0;
		
		//if the customer is aged between 18 and 64 years and is not a student
		if (this.age >= 18 && this.age <= 64 && !this.isStudent)
		{
			//the price is $10
			price = 10;
		}
		
		//if not, but it has less than 18 years
		else if (this.age < 18)
		{
			//the price is 7
			price = 7;
		}
		
		//why between 10 and 25 if people aged less than 18 pay 7 dollars?
		//it would not make sense someone aged 17 and is not a student pay $7
		//if someone aged 17 and is a student pay $8.50
		
		//if not, but the age is bigger than 10 and less than 25 and is a student
		else if (this.age  >= 10 && this.age <= 25 && this.isStudent)
		{
			//give 15% of discount
			price = 0.85f * 10;
		}
		
		//if not, but the age is bigger than 25 and is a students
		else if (this.age > 25 && this.isStudent)
		{
			//give 10% of discount
			price = 0.90f * 10;
		}
		
		//if not, but the age is bigger than 64 and is not a student
		else if (this.age > 64 && !this.isStudent)
		{
			//give 7% of discount
			price = 0.93f * 10;
		}
        //returns the price        
		return price;
	}
	
}
