package Book;

import java.util.Scanner;

public class Library 

{
	int capacity;
	Scanner input = new Scanner(System.in);
	
	Book[] aBook;
	
	public String toString()
	{
		StringBuilder sb = new StringBuilder();
        
		for (int i = 0; i < 5; i++)
		{
            int sequence = i + 1;
			sb.append(sequence)
			.append(". ")
			.append(aBook[i].title)
            .append(" By ")
            .append(aBook[i].author)
            .append(" is borrowed: ")
            .append(aBook[i].isBorrowed ? "Yes" : "No")
            .append(";")
            .append("\n");
		}
        
		return sb.toString();
	}
	
	public Library(int capacity)
	{
		this.capacity = capacity;
		
		//System.out.println("Please, enter the library's capacity:");
		//capacity = input.nextInt();
		
		if (capacity < 1)
		{
			//System.out.println("This is not valid, the capacity was set to 3");
			this.aBook = new Book[5];
		}
		else
		{
			this.aBook = new Book[capacity];
		}
	}
	
	public boolean addBook(Book book)
	{
		for (int n = 0; n < this.aBook.length; n++)
		{
			if (aBook[n] == null)
			{
				aBook[n] = book;
				return true;
			}
		}
		return false;
	}
	
	public Book borrow(String title)
	{
		//System.out.println("Enter a book's title:");
		//title = input.nextLine();
		
		for (int x = 0; x < capacity; x++)
		{
			if (title.equals(aBook[x].title))
			{
				aBook[x].isBorrowed = true;
				return aBook[x];
			}
		}
		return null;
	}
}