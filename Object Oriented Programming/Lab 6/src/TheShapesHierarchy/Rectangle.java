package TheShapesHierarchy;

//a class that is an extension for the Shape class
public class Rectangle extends Shape
{
	//declares the variables
	private double length;
	private double width;
	
	//constructor
	public Rectangle(double length, double width)
	{
		this.length = length;
		this.width = width;
	}
	
	//overrides the method in the main object class to calculate the area
	@Override
	public double computeArea()
	{
		return
				this.length * this.width;
	}
}
