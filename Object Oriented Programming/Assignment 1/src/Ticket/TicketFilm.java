package Ticket;

public class TicketFilm 
{
	//introduces the title and rating variables
	private String title;
	private char rating;

	//toString method outputs a representation of the movie
	public String toString()
	{
	return
			"------------------------------------------------------------"
			+ "\n" + 
			"FILM TICKET for: " + this.title + " rating: (" + this.rating + ")";
	}
	
	//Constructor with inputs for title and rating
	public TicketFilm(String title, char rating)
	{
		this.title = title;
		this.rating = rating;
	}
	
	//private variables needs get and set methods to be used
	public String getTitle()
	{
		return this.title;
	}
	
	public char getRating()
	{
		return this.rating;
	}
	
}
