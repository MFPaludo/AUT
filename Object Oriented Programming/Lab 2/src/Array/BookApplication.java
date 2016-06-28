package Array;
import java.util.*;

public class BookApplication 
{
	public static void main(String[] args) 
	{
		Scanner type = new Scanner(System.in);
		System.out.println("How many books to you want to input?");
		int numberOfBooks = type.nextInt();

		BookA[] books = new BookA[numberOfBooks];
		
		for (int i = 0; i < numberOfBooks; i++)
		{
			System.out.println("Informations for Book"+i);
			
			Scanner input = new Scanner(System.in);
			
			System.out.println("Now, type the book's title:");
			String inputTitle = input.nextLine();
			
			System.out.println("Please, input the author's name: ");
			String inputAuthor = input.nextLine();
			
			System.out.println("Please, enter the number of pages:");
			int inputPages = input.nextInt();
			
			books[i] = new BookA(inputTitle, inputAuthor, inputPages);
		}
		
		for (int n = numberOfBooks - 1; n >= 0; n--)
		{
			System.out.println(books[n].title);
		}
	}

}
