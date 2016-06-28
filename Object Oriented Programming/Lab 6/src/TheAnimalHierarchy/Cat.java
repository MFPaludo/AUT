package TheAnimalHierarchy;

//creates a class that is a extension of the animal class
public class Cat extends Animal 
{
	//prints the Cat object
	public String toString()
	{
		return 
				"Cat has " + super.toString();
	}
	
	//constructor to initiate the Cat object
	public Cat()
	{
		System.out.println("Cat object instantiated!");
		this.happy = -10;
	}
	
	//feed method for the cat object
	@Override
	public void feed()
	{
		this.eat += 1;
		//a cat will neve be happy
		if(this.happy <= 0)
		{
			this.happy += 10;
		}
	}
	
}
