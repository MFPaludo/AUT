package Film;
import java.util.*;

public class FilmApplication 
{

	public static void main(String[] args) 
	{
		//constructor with default values
		Film aMovie = new Film("Default Title", 12);
		
		//starts a new scanner
		Scanner input = new Scanner(System.in);
		
		//asks the user to input the movie's title
		//the set method has to be used here to refer to the correct private variable
		System.out.println("Enter the film's title: ");
		aMovie.setTitle(input.nextLine());
		
		System.out.println("Enter the film's rating: ");
		aMovie.setRating(input.nextInt());
		
		//prints the toString inside the object
		System.out.println(aMovie);
	}
}
