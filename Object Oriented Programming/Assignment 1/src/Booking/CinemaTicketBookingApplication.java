package Booking;

import java.util.Scanner;

public class CinemaTicketBookingApplication 
{
	//initiates the array as a static
	static BookingFilm[] films;
	
	public static void main(String[] args) 
	{
		//initialises the array with the 4 movies
		array();
		films[0] = new BookingFilm("Suicide Squad", 'M');
		films[1] = new BookingFilm("Batman vs Superman", 'P');
		films[2] = new BookingFilm("Zootopia", 'G');
		films[3] = new BookingFilm("Deadpool", 'M');
		
		//greeting message
		System.out.println("Welcome to the Cinema Ticket Purchasing System");
		
		//new scanner
		Scanner input = new Scanner(System.in);
		//car to repeat or not
		char repeat = 'Y';
		
		//do
		do
		{
			//start this method
			BookingCustomer aClient = customerDetailsInput();
			//start this method
			BookingFilm aMovie = filmSelection();
			
			//print the ticket using the informations in these objects
			System.out.println(issueTicket(aClient, aMovie));
			
			//the user decides if wants or not a new order
			repeat = input.next().charAt(0);
			
			//while the command given is Y, it will start everything again from "do"
		} while (repeat == 'Y' || repeat == 'y');
	}
	
	//creates the private static method for customer informations
	private static BookingCustomer customerDetailsInput()
	{
		//constructor with initial values for the customer's informations
		BookingCustomer aClient = new BookingCustomer("Paludo", 21, true);
		
		//new scanner
		Scanner input = new Scanner(System.in);
		
		//asks the user to enter his/her information and uses the set methods to build the object
		System.out.println("Please enter your name:");
		aClient.setName(input.nextLine());
		
		System.out.println("Please enter your age:");
		aClient.setAge(input.nextInt());
		
		//asks if the student is a student
		System.out.println("Are you a student? (Y/N)");
		char yesNo = input.next().charAt(0);
		
		//if the answer is y
		if (yesNo == 'Y' || yesNo == 'y')
		{
			//is a student
			aClient.setStudent(true);
		}
		//if the answer is n
		else if (yesNo == 'N' || yesNo == 'n')
		{
			//is not a student
			aClient.setStudent(false);
		}
		
		//returns the client object
		return
				aClient;
	}
	
	//creates the private method for the film selection
	private static BookingFilm filmSelection()
	{
		//prints out the name of the movies
		System.out.println("Which film would you like to watch:");
		System.out.println("1 Suicide Squad rating: (M)");
		System.out.println("2 Batman vs Superman rating: (P)");
		System.out.println("3 Zootopia rating: (G)");
		System.out.println("4 Deadpool rating: (M)");
		
		//new scanner
		Scanner input = new Scanner(System.in);
		//variable to choose the moovie number on the list
		//-1 because the array starts on 0
		int movieNumber = input.nextInt() - 1;
		
		//constructor with all the information for the movie
		BookingFilm aMovie = new BookingFilm(films[movieNumber].getTitle(), films[movieNumber].getRating());
		
		//returns the correct movie
		return
				aMovie;
	}
	
	//public method to print the ticket
	public static BookingTicket issueTicket(BookingCustomer aClient, BookingFilm aMovie)
	{
		//constructor with all the previous information about the customer and movie
		BookingTicket aTicket = new BookingTicket(aClient.getName(), aClient.getAge(), aClient.getStudent(), aMovie.getTitle(), aMovie.getRating());
		
		//if the age is appropriate to the chosen movie
		if ((aMovie.getRating() == 'G')||(aMovie.getRating() == 'P' && aClient.getAge() >= 12)||(aMovie.getRating() == 'M' && aClient.getAge() >= 16))
		{
			//returns the ticket
			return
					aTicket;
		}

		//if not
		else
		{
			//appologising message
			System.out.println("Sorry, cannot issue ticket for age restricted film.");
			System.out.println("Issue another ticket? (Y/N)");
			return
			null;
		}
	}
	
	//static class
	public static void array() 
	{
		//keyboard input
		Scanner input = new Scanner(System.in);
		
		//static int for number of films
		final int NUMBER_OF_FILMS = 4;
		
		//specifies the size of the array
		films = new BookingFilm[NUMBER_OF_FILMS];
	}

}
