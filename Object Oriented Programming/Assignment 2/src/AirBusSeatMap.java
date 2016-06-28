//Extension of SeatMap class that has the information of an Air Bus Seat Map
public class AirBusSeatMap extends SeatMap
{
	//****************************************************************************************************
	//Number of rows, columns and first class rows in an Air Bus
	public AirBusSeatMap()
	{
		this.number_of_rows = 12;
		this.number_of_columns = 9;
		this.first_class_rows = 6;
		
		initialiseSeatMap();
	}
	
	//****************************************************************************************************
	//Initializes and populates the seats array accordingly
	@Override
	public void initialiseSeatMap() 
	{
		//Declares the array
		this.seat_array = new Seat[number_of_rows][number_of_columns];
		
		//Creates a SeatPosition array
		SeatPosition[][] seat_position_array = new SeatPosition[number_of_rows][number_of_columns];
		
		//Goes through all rows
		for(int row = 0; row < number_of_rows; row++)
		{
			//Goes through all columns
			for(int column = 0; column < number_of_columns; column++)
			{
				//All elements are set as non reserved

				//Creates the respective seat position
				seat_position_array[row][column] = new SeatPosition(row + 1, (char) ('A' + column));
				
				//If the seat is in the first two rows it is first class
				if(row <= 1)
				{
					//Window seats are always in first and last columns
					if(column == 0 || column == number_of_columns - 1)
					{
						this.seat_array[row][column] = new Seat(false, true, SeatType.WINDOW, seat_position_array[row][column]);
					}
					//Middle seats are in column D
					else if(column == 1 || column == 4 || column == 7)
					{
						this.seat_array[row][column] = new Seat(false, true, SeatType.MIDDLE, seat_position_array[row][column]);
					}
					//All the other seats are aisle seats
					else
					{
						this.seat_array[row][column] = new Seat(false, true, SeatType.AISLE, seat_position_array[row][column]);
					}
				}
				//The other rows are economy class
				else
				{
					//Window seats are always in first and last columns
					if(column == 0 || column == number_of_columns - 1)
					{
						this.seat_array[row][column] = new Seat(false, false, SeatType.WINDOW, seat_position_array[row][column]);
					}
					//Middle seats are in column D
					else if(column == 1 || column == 4 || column == 7)
					{
						this.seat_array[row][column] = new Seat(false, false, SeatType.MIDDLE, seat_position_array[row][column]);
					}
					//All the other seats are aisle seats
					else
					{
						this.seat_array[row][column] = new Seat(false, false, SeatType.AISLE, seat_position_array[row][column]);
					}
				}
			}
		}
	}
}
