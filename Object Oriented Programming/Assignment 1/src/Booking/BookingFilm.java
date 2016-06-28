package Booking;

public class BookingFilm 
{
	//introduces the title and rating variables
	private String title;
	private char rating;
	
	//Constructor with inputs for title and rating
	public BookingFilm(String title, char rating)
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
