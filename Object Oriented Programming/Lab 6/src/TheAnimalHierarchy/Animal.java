package TheAnimalHierarchy;

public class Animal
{
	//declares the eat and happy variables
	//protected variables can be used in extensions as well
	protected int eat;
	protected int happy;
	
	//prints out the object
	public String toString()
	{
		return "Eaten: " + this.eat + " Happy:" + this.happy;
	}
	
	//empty constructor that initialises the variables to 0
	public Animal()
	{
		this.eat = 0;
		this.happy = 0;
	}
	
	//empty feed method
	public void feed()
	{	
	}	
}
