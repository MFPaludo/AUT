package Book;

public class Book 
{
	String title;
	String author;
	boolean isBorrowed;
	
	public String toString()
	{
		return
				this.title + " by " + this.author + " is borrowed: " + (this.isBorrowed ? "Yes" : "No");
	}
	
	public Book(String title, String author)
	{
		this.title = title;
		this.author = author;
		this.isBorrowed = false;
	}
}