//Abstract class with methods to define the behavior of the airline classes
abstract public class Airline 
{
	//****************************************************************************************************
	//String for the name of the airlines
	protected String airline_name;
	
	//****************************************************************************************************
	//Overrides the toString method and gives the output of the representations of the object
	public String toString()
	{
		return
				"Welcome to the " + airline_name + " reservation system!";
	}
	
	//****************************************************************************************************
	//Reserves a First Class Seat according to the airline's behavior
	public abstract Seat reserveFirstClass(Flights flight, SeatType seat_type);
	
	//****************************************************************************************************
	//Reserves an Economy Class Seat according to the airline's behavior
	public abstract Seat reserveEconomy(Flights flight, SeatType seat_type);
	
	//****************************************************************************************************
	//Not in the brief
	//Returns the name of the airline
	public String return_airline_name()
	{
		//Returns the string variable
		return this.airline_name;
	}
}
