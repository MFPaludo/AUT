package Booking;

public class BookingTicket 
{
	//introduces all the necessary variables
	private String name;
	private int age;
	private boolean isStudent;
	private double price;
	private String title;
	private char rating;
	
	//prints out the tickets
	public String toString()
	{
	return
			"Your ticket is ready to be collected!"
			+ "\n" + 
			"------------------------------------------------------------"
			+ "\n" + 
			"FILM TICKET for: " + this.title + " rating: (" + this.rating + ")"
			+ "\n" + 
			"CUSTOMER DETAILS: " + this.name + " age: " + this.age + " Student? " + (this.isStudent ? "Yes" : "No")
			+ "\n" +
			"TOTAL COST: $" + ((String.format("TOTAL COST: $%1.2f", this.cost())))
			+ "\n" + 
			"------------------------------------------------------------"
			+ "\n" + "\n" + 
			"Issue another ticket? (Y/N)";
	}
	
	//constructor with all the necessary inputs
	public BookingTicket(String name, int age, boolean isStudent, String title, char rating)
	{
		this.name = name;
		this.age = age;
		this.isStudent = isStudent;
		this.title = title;
		this.rating = rating;
	}
	
	//get methods
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
	
	public String getTitle()
	{
		return this.title;
	}
	
	public char getRating()
	{
		return this.rating;
	}
	
	//method double price to calculate the ticket's cost
	public double cost()
	{
		//initiates the price variable
		this.price = 0;
		
		//if the customer is aged between 18 and 64 years and is not a student
		if (this.age >= 18 && this.age <= 64 && !this.isStudent)
		{
			//the price is $10
			this.price = 10;
		}
		
		//if not, but it has less than 18 years
		else if (this.age < 18)
		{
			//the price is 7
			this.price = 7;
		}
		
		//why between 10 and 25 if people aged less than 18 pay 7 dollars?
		//it would not make sense someone aged 17 and is not a student pay $7
		//if someone aged 17 and is a student pay $8.50
		
		//if not, but the age is bigger than 10 and less than 25 and is a student
		else if (this.age  >= 10 && this.age <= 25 && this.isStudent)
		{
			//give 15% of discount
			this.price = 0.85f * 10;
		}
		
		//if not, but the age is bigger than 25 and is a students
		else if (this.age > 25 && this.isStudent)
		{
			//give 10% of discount
			this.price = 0.90f * 10;
		}
		
		//if not, but the age is bigger than 64 and is not a student
		else if (this.age > 64 && !this.isStudent)
		{
			//give 7% of discount
			this.price = 0.93f * 10;
		}
		
        //returns the price         
		return this.price;
	}
		
}
