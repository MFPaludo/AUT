package Customer;

public class Customer 
{
	//introduces the variables
	private String name;
	private int age;
	private boolean isStudent;
	
	//this toString method represents the customer object
	public String toString()
	{
		return
				"The customer's name is: " + this.name
				+ "\n" +
				"The customer's age is: " + this.age
				+ "\n" +
				//is the customer a student ? "Yes, do it" : "No, do it"
				(this.isStudent ? "The customer is a student." : "The customer isn't a student.");
	}
	
	//constructor with inputs for name, age and student
	public Customer(String name, int age, boolean isStudent)
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
	public void setName(String name)
	{
		this.name = name;
	}
	
	public int getAge()
	{
		return this.age;
	}
	public void setAge(int age)
	{
		this.age = age;
	}
	
	public boolean getStudent(boolean isStudent)
	{
		return this.isStudent;
	}
	public void setStudent(boolean isStudent)
	{
		this.isStudent = isStudent;
	}
	
}