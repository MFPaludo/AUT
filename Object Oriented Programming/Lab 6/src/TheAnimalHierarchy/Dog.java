package TheAnimalHierarchy;

//creates the Dog class, that is an extension of the Animal class
public class Dog extends Animal
{
	
	//prints the Dog object
	public String toString()
	{
		return
				"Dog has " + super.toString();
	}
	
	//constructor for the Dog object
	public Dog()
	{
		System.out.println("Dog object instantiated!");
		this.happy = 10;
	}
	
	//feed method for the Dog
	@Override
	public void feed()
	{
		this.eat += 5;
		this.happy += 10;
	}
}