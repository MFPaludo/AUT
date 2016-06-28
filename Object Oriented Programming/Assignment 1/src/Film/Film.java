package Film;
public class Film 
{
	//introduces the title and rating variables
	private String title;
	private int rating;
	
	//toString method outputs a representation of the movie
	public String toString()
	{
		return
				"The movie's title is: " + this.title
				+ "\n" +
				"The rating is: " + this.rating;
	}
	
	//Constructor with inputs for title and rating
	public Film(String title, int rating)
	{
		this.title = title;
		this.rating = rating;
	}
	
	//private variables needs get and set methods to be used
	public String getTitle()
	{
		return this.title;
	}
	public void setTitle(String title)
	{
		this.title = title;
	}
	
	public int getRating()
	{
		return this.rating;
	}
	public void setRating(int rating)
	{
		this.rating = rating;
	}
	
}
