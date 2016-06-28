//Class to create object flights
public class Flights 
{
	//****************************************************************************************************
	//Declaring variables to be used in the program
	private String flight_number;
	private String start_city;
	private String destination_city;
	private String departure_time;
	private SeatMap seat_map;
	
	//****************************************************************************************************
	//Not in the brief
	//Overrides the original toString method
	public String toString()
	{
		return
				"Flight: " + flight_number + " from: " + start_city + " to: " + destination_city + " departing: " + departure_time;
	}
	
	//****************************************************************************************************
	//Object constructor
	public Flights(String flight_number, String start_city, String destination_city, String departure_time, SeatMap seat_map)
	{
		this.flight_number = flight_number;
		this.start_city = start_city;
		this.destination_city = destination_city;
		this.departure_time = departure_time;
		this.seat_map = seat_map;
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Returns the seat_map object
	public SeatMap get_seat_map()
	{
		return this.seat_map;
	}
}
