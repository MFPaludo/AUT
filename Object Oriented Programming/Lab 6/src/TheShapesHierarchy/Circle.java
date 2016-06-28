package TheShapesHierarchy;

//a class that is an extension for the Shape class
public class Circle extends Shape
{
	//declares the variables
	double radius;
	
	//constructor
	public Circle(double radius)
	{
		this.radius = radius;
	}
	
	//overrides the method in the main object class to calculate the area
	@Override
	public double computeArea()
	{
		return
				this.radius * 3.14 * 2;
	}
}
