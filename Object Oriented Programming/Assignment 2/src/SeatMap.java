//Abstract class that defines the behavior of how are the Seat Maps will be printed
abstract public class SeatMap 
{
	//****************************************************************************************************
	//Declaring variables to be used in the program
	protected int number_of_rows;
	protected int number_of_columns;
	protected Seat [][] seat_array;
	protected int first_class_rows;
	
	//****************************************************************************************************
	//Returns a text representation of the SeatMap
	public String toString()
	{
		//Uses a StringBuilder to record and print the seat map
		StringBuilder string_builder = new StringBuilder();
		
		//Creates a sequence to add elements to the StringBuilder
		//The append command adds a new element to the StringBuilder
		string_builder
		.append("	");
		
		//Prints the letters of all columns using the for loop
		for(int columns = 0; columns < number_of_columns; columns++)
		{
			string_builder
			.append((char) ('A' + columns)).append("      ");
		}
		
		//for and nested for loops to print the whole matrix
		for(int rows = 0; rows < number_of_rows; rows++)
		{
			//Starts a new line
			string_builder
			.append("\n");
			
			//Prints the number of the row and a space
			string_builder
			.append(rows + 1).append("	");
			
			//Nested for loop to scan all columns for every row
			for(int columns = 0; columns < number_of_columns; columns++)
			{
				//Adds each element printed according to the output example
				string_builder
				.append("[");
				
				//The first class seats have uppercase letters
				//If the seat is first class
				if(seat_array[rows][columns].get_first_class() == true)
				{
					//If the seat is in the window
					if(seat_array[rows][columns].get_seat_type() == SeatType.WINDOW)
					{
						//Add an uppercase W
						string_builder
						.append("W ");
					}
					//If the seat is an aisle seat
					else if(seat_array[rows][columns].get_seat_type() == SeatType.AISLE)
					{
						//Adds an uppercase A
						string_builder
						.append("A ");
					}
					//If not, is a middle seat
					else
					{
						//Adds an uppercase M
						string_builder
						.append("M ");
					}
					
					//If the seat is reserved
					if(seat_array[rows][columns].get_is_reserved())
					{
						//Adds an uppercase X
						string_builder
						.append("X ");
					}
					//If is not reserved
					else
					{
						//Adds a _
						string_builder
						.append("_ ");
					}
				}
				//If is not first class
				else
				{
					//If the seat is in the window
					if(seat_array[rows][columns].get_seat_type() == SeatType.WINDOW)
					{
						//Add an lowercase w
						string_builder
						.append("w ");
					}
					//If the seat is an aisle seat
					else if(seat_array[rows][columns].get_seat_type() == SeatType.AISLE)
					{
						//Adds an lowercase a
						string_builder
						.append("a ");
					}
					//If not, is a middle seat
					else
					{
						//Adds an lowercase m
						string_builder
						.append("m ");
					}
					
					//If the seat is reserved
					if(seat_array[rows][columns].get_is_reserved())
					{
						//Adds an lowercase x
						string_builder
						.append("x ");
					}
					//If is not reserved
					else
					{
						//Adds a _
						string_builder
						.append("_ ");
					}
				}
				
				string_builder
				.append(" ]");
			}
		}
		
		return string_builder.toString();
	}
	
	//****************************************************************************************************
	//Public Abstract method to initialise the seat map
	public abstract void initialiseSeatMap();
		//this.seat_array = new Seat [number_of_rows][number_of_columns];
		//Instantiates each Seat object stored in the seats array with the appropriate SeatPosition object by translating the array indices to a SeatPosition

	//****************************************************************************************************
	//Returns the last arrow and row in the seat mapping
	public int get_last()
	{
		return this.number_of_rows + this.number_of_columns;
	}
	
	//****************************************************************************************************
	//Returns a specified seat position
	public Seat getSeat(int row, char column)
	{
		return seat_array[row][column - 16];
	}
	
	//****************************************************************************************************
	//Returns the left of the input seat using SeatPosition to find the seat in the 2D array
	//Returns null if the seat does not exist
	public Seat getLeft(Seat selected_seat)
	{
		//Converts to an integer and subtracts 1
		int convert = (char) (selected_seat.get_column() - 1);
		//Assigns back to char
		char column = (char) (convert);
		return getSeat(selected_seat.get_row(), column);
	}
	
	//****************************************************************************************************
	//Returns the right of the input seat using SeatPosition to find the seat in the 2D array
	//Returns null if the seat does not exist
	public Seat getRight(Seat selected_seat)
	{
		//Converts to an integer and adds 1
		int convert = (char) (selected_seat.get_column() + 1);
		//Assigns back to char
		char column = (char) (convert);
		return getSeat(selected_seat.get_row(), column);
	}
	
	//****************************************************************************************************
	//Returns an available seat in the economy class that matches the SeatType chosen by the user
	//If all seats in this type are reserved, return any seat in economy class
	//If all seats are reserved, return null
	public Seat queryAvailableEconomySeat(SeatType seat_type)
	{
		//Scans all the rows
		for(int row = 0; row < number_of_rows; row++)
		{
			//Scans all the columns
			for(int column = 0; column < number_of_columns; column++)
			{
				//If the seat is not first class, not reserved and matches the seat type
				if((seat_array[row][column].get_first_class() == false) && (seat_array[row][column].get_seat_type() == seat_type) && (!seat_array[row][column].get_is_reserved()))
				{
					//Returns the seat
					return seat_array[row][column];
				}
			}
		}
		
		//If the program doesn't finds any seat, it will search for any available seat in economy class
		//Scans all the rows
		for(int row = 0; row < number_of_rows; row++)
		{
			//Scans all the columns
			for(int column = 0; column < number_of_columns; column++)
			{
				//If the seat is not first class and is not reserved
				if((seat_array[row][column].get_first_class() == false) && (!seat_array[row][column].get_is_reserved()))
				{
					//Returns the seat
					return seat_array[row][column];
				}
			}
		}
		
		//If there are no available seats in economy class, null is returned
		return null;
	}
	
	//****************************************************************************************************
	//Returns an available seat in the first class that matches the SeatType chosen by the user
	public Seat queryAvailableFirstClassSeat(SeatType seat_type)
	{
		//Scans all the rows
		for(int row = 0; row < number_of_rows; row++)
		{
			//Scans all the columns
			for(int column = 0; column < number_of_columns; column++)
			{
				//If the seat is first class, not reserved and matches the seat type
				if((seat_array[row][column].get_first_class()) && (seat_array[row][column].get_seat_type() == seat_type) && (!seat_array[row][column].get_is_reserved()))
				{
					//Returns the seat
					return seat_array[row][column];
				}
			}
		}
		
		//If the program doesn't finds any seat, it will search for any available seat in first class
		//Scans all the rows
		for(int row = 0; row < number_of_rows; row++)
		{
			//Scans all the columns
			for(int column = 0; column < number_of_columns; column++)
			{
				//If the seat is first class and is not reserved
				if((seat_array[row][column].get_first_class()) && (!seat_array[row][column].get_is_reserved()))
				{
					//Returns the seat
					return seat_array[row][column];
				}
			}
		}
		
		//If there are no available seats in first class, null is returned
		return null;
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Method reserves a whole row
	public Seat reserve_economy_row()
	{
		//Creates an integer to count non reserved seats
		int count;
		
		//Scans row by row
		for(int row = 0; row < number_of_rows; row++)
		{
			//Sets count to 0 every row
			count = 0;
			
			//Scans all the elements of a column
			for(int column = 0; column < number_of_columns; column++)
			{
				//If the seat is not reserved
				if(!seat_array[row][column].get_is_reserved())
				{
					//Adds one to the counter
					count++;
				}
			}
			
			//If the counter is equal to the number of columns
			if(count == number_of_columns - 1)
			{
				//Reserve all seats and return a seat
				for(int column = 0; column < number_of_columns; column++)
				{
					//Reserves a seat
					seat_array[row][column].set_reserved();
				}
				
				//Returns the first seat of the respective row
				return seat_array[row][0];
			}
		}
		return null;
	}
}