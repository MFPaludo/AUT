package Rating;

//creates the enum class
public enum RatingEnum 
{
	//initiates the 3 variables with default value corresponding to the NZ film rating ages
	G(0), P(12), M(16);
	
	//introduces a variable to the minimal age
	private int minimalAge;
	
	//constructor with input for the minimal age
	private RatingEnum(int minimalAge)
	{
		this.minimalAge = minimalAge;
	}
}
