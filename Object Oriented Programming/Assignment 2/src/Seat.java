//Class to define Seat positions and print details of the selected seat
public class Seat 
{
	//****************************************************************************************************
	//Declaring variables to be used in the program
	private boolean is_reserved;
	private boolean is_first_class;
	private SeatType seat_type;
	private SeatPosition seat_position;
	
	//****************************************************************************************************
	//Describes the object with a longer text
	public String toString()
	{
		return 
				(this.is_first_class ? "First" : "Economy") + " class " +
				this.seat_type + " seat " +
				"at:" + this.seat_position + (this.is_reserved ? " is reserved." : " is not reserved.");
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Constructor with parameters
	public Seat(boolean is_reserved, boolean is_first_class, SeatType seat_type, SeatPosition seat_position)
	{
		this.is_reserved = is_reserved;
		this.is_first_class = is_first_class;
		this.seat_type = seat_type;
		this.seat_position = seat_position;
	}
	
	//****************************************************************************************************
	//Get method to return either if the seat is in first or economy class
	public boolean get_first_class()
	{
		//Returns the value that the is_first_class variable holds
		return this.is_first_class;
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Get method to return the seat type
	public SeatType get_seat_type()
	{
		//Returns the seat type
		return this.seat_type;
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Get method to return either if the seat is reserved or not
	public boolean get_is_reserved()
	{
		//Returns the boolean
		return this.is_reserved;
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Necessary to set a reserved seat to reserved
	//It doesn't has parameters because it will be used in only one case to set the same variable to a value
	public boolean set_reserved()
	{
		//Sets is_reserved to true
		return this.is_reserved = true;
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Return the row
	public int get_row()
	{
		//Returns the row
		return this.seat_position.get_row();
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Return the row
	public char get_column()
	{
		//Returns the column
		return this.seat_position.get_column();
	}
}
