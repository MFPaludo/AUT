//Imports the Scanner from Java library
import java.util.Scanner;

//Main application of the program
//This class will provide a user interface which enables the customer to view an aircraft seating plan
//The user is able to choose and reserve seats according to chosen seat types and either economy or first class
//The user receives a representation of the chosen seat 
public class AirlineReservationApplication {

	//The program was done using different methods
	//Using different methods makes the code easy to debug and more organized
	
	//Starts a new Scanner as a global variable
	public static Scanner input = new Scanner(System.in);

	//****************************************************************************************************
	//Main method
	public static void main(String[] args) 
	{		
		//Calls the method to ask the user which airline to take
		Airline airline = choose_airline();
		
		//Jumps a line
		System.out.println();
		
		//Calls the method to ask the user which flight to take
		Flights flight = choose_flight();
		
		//Variable to decide which action to take in the program
		int action = 1;
		
		//Will do everything in the structure
		do
		{
			//Prints the menu with the action options
			System.out.println("1. Reserve First Class");
			System.out.println("2. Reserve Economy Class");
			System.out.println("3. Show Seating Map");
			System.out.println("4. Quit");
			
			//Takes input from the user and assigns it to the variable
			action = input.nextInt();
			
			//Jumps a line
			System.out.println();
			
			//If the user types 1 or 2, it will reserve a seat
			if (action == 1 || action == 2)
			{
				//Asks the user which kind of seat to reserve
				SeatType seat_type = choose_seat_type();
				
				//Jumps a line
				System.out.println();
				
				//If the user wants a first class seat
				if(action == 1)
				{
					//Try to reserve the seat
					Seat reserve_seat = airline.reserveFirstClass(flight, seat_type);
					
					//Outputs informations about the reserved seat
					System.out.println(reserve_seat);
					
					//Jumps a line
					System.out.println();
					
					//Prints the seat map
					System.out.println(flight.get_seat_map());
					
					//Jumps a line
					System.out.println();
				}
				//If the user wants an economy class seat
				else
				{
					//Try to reserve the seat
					Seat reserve_seat = airline.reserveEconomy(flight, seat_type);
					
					//Outputs informations about the reserved seat
					System.out.println(reserve_seat);
					
					//Jumps a line
					System.out.println();
					
					//Prints the seat map
					System.out.println(flight.get_seat_map());
					
					//Jumps a line
					System.out.println();
				}
			}
			//If the user types 3, it will print the seat map
			else if (action == 3)
			{
				//Prints the seat map
				System.out.println(flight.get_seat_map());
				
				//Jumps a line
				System.out.println();
			}
		}
		//While action is not 4
		while(action != 4);
		
		//Jumps a line
		System.out.println();
		
		//Goodbye message
		System.out.println("Goodbye.");
	}
	
	//****************************************************************************************************
	//This method will ask the user to choose an airline company and will return this airline object
	private static Airline choose_airline()
	{
		//Asks the user which airline to select the airline
		System.out.println("Which airline would you like to travel with?");
		
		//Displays the Airline names
		System.out.println("1: FastAir Airline");
		System.out.println("2: JetSun Airline");
		
		//Assigns the users input to a variable
		int airline_choose = input.nextInt();
		
		//Jumps a line
		System.out.println();
		
		//If the user type 1
		if(airline_choose == 1)
		{
			//A FastAir object is created
			FastAir airline = new FastAir();
			
			//Prints a representation of the airline object
			System.out.println(airline);
			
			//Returns the object created
			return airline;
		}
		//If the user type 2 or any other integer 
		//I decided to do it because there was nothing about user wrong input in the brief
		else
		{
			//A JetSun object is created
			JetSun airline = new JetSun();
			
			//Prints a representation of the airline object
			System.out.println(airline);
			
			//Returns the object created
			return airline;
		}
	}
	
	//****************************************************************************************************
	//This method will ask the user which flight to take and return the respective object
	private static Flights choose_flight()
	{
		//Creates 2 SeatMaps, one for each aircraft
		AirBusSeatMap airbus_seat_map = new AirBusSeatMap();
		BoeingSeatMap boeing_seat_map = new BoeingSeatMap();
		
		//Creates 2 Flights objects
		//	public Flights(String flight_number, String start_city, String destination_city, String departure_time, SeatMap seat_map)
		Flights curitiba_poa_flight = new Flights("3847", "Curitiba, Aeroporto Afonso Pena(CWB)", "Porto Alegre, Aeroporto Salgado Filho(POA)", "08:05 AM", boeing_seat_map);
		Flights auckland_calgary_flight = new Flights("NZ4515", "Auckland, Auckland International Airport (AKL)", "Calgary, Calgary International Airport(YYC)", "09:50 PM", airbus_seat_map);
		
		//Asks the user which flight to take
		System.out.println("Which flight would you like to reserve a seat on?");
		
		//Displays the two object previously created
		System.out.println("1: " + curitiba_poa_flight);
		System.out.println("2: " + auckland_calgary_flight);
		
		//Assigns the users input to a variable
		int flight_choose = input.nextInt();
		
		//Jumps a line
		System.out.println();
		
		//If the user type 1
		if(flight_choose == 1)
		{
			//Prints a representation of the curitiba_poa_flight
			System.out.println("Booking seats for " + curitiba_poa_flight);
			
			//Jumps a line
			System.out.println();
			
			//Prints the seat map
			System.out.println(boeing_seat_map);
			System.out.println();
			
			//Returns the flight object
			return curitiba_poa_flight;
		}
		//If the user type 2 or any other integer 
		//I decided to do it because there was nothing about user wrong input in the brief
		else
		{
			//Prints a representation of the auckland_calgary_flight
			System.out.println("Booking seats for " + auckland_calgary_flight);
			
			//Jumps a line
			System.out.println();
			
			//Prints the seat map
			System.out.println(airbus_seat_map);
			System.out.println();
			
			//Returns the flight object
			return auckland_calgary_flight;
		}
	}
	
	//****************************************************************************************************
	//Method that asks the user to choose the seat type
	private static SeatType choose_seat_type()
	{
		//Outputs the options
		System.out.println("1. AISLE");
		System.out.println("2. MIDDLE");
		System.out.println("3. WINDOW");
		
		//Takes input from the user
		int choose = input.nextInt();
		
		//If the user input 1
		if(choose == 1)
		{
			//Return aisle
			return SeatType.AISLE;
		}
		//If the user input 2
		else if(choose == 2)
		{
			//Return middle
			return SeatType.MIDDLE;
		}
		//Otherwise
		else
		{
			//Return window
			return SeatType.WINDOW;
		}
	}
}
