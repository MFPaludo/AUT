package Book;
import java.util.Scanner;

public class BookInputApp 
{

	public static void main(String[] args) 
	{
		Scanner input = new Scanner(System.in);
		
		System.out.println("Please, input the author's name: ");
		String inputAuthor = input.nextLine();
		
		System.out.println("Now, type the book's title:");
		String inputTitle = input.nextLine();
		
		System.out.println("Please, enter the number of pages:");
		int inputPages = input.nextInt();
		
		while (inputPages <= 0)
		{
			System.out.println("I'm sorry Dave, I'm afraid I can't do that. Please, enter a number bigger than 0");
			inputPages = input.nextInt();
		}
		
		Book aBook = new Book(inputAuthor, inputTitle, inputPages);
		System.out.println(aBook);
	}
}
