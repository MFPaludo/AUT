//Class that is an extension of Airline class, wich defines how will the FastAir class act
public class FastAir extends Airline
{
	//****************************************************************************************************
	//Not in the brief
	//Sets the name of the airline
	public FastAir() 
	{
		airline_name = "FastAir";
	}

	//****************************************************************************************************
	//Overrides the reserveFirstClass method in Airline
	@Override
	//Reserves a First Class Seat according to the airline's behavior
	public Seat reserveFirstClass(Flights flight, SeatType seat_type) 
	{
		//Returns the available seat at first class
		Seat seat_available = flight.get_seat_map().queryAvailableFirstClassSeat(seat_type);
		
		//If there are no seats available in first class
		if(seat_available == null)
		{
			//Calls the function to reserva an entire row
			seat_available = flight.get_seat_map().reserve_economy_row();
			
			//If the seat was not found
			if(seat_available == null)
			{
				//Null is returned
				return null;
			}
			//If a row was found
			else
			{
				//The first seat of the respective row is returned
				return seat_available;
			}
		}
		
		//If it the program found a seat
		if(seat_available != null)
		{
			//Set the seat to reserved
			seat_available.set_reserved();
			
			//Returns the seat
			return seat_available;
		}
		//If there is any seat
		else
		{
			//The reservation is not made
			return null;
		}
	}

	//****************************************************************************************************
	//Overrides the reserveEconomy method in Airline
	@Override
	//Reserves an Economy Class Seat according to the airline's behavior
	public Seat reserveEconomy(Flights flight, SeatType seat_type)
	{
		//Returns the available seat at economy class
		Seat seat_available = flight.get_seat_map().queryAvailableEconomySeat(seat_type);
		
		//If any seat is found, return any seat in first class
		if(seat_available == null)
		{
			//Returns the available seat at first class
			seat_available = flight.get_seat_map().queryAvailableFirstClassSeat(seat_type);
			
			//If there are no seats available in first class
			if(seat_available == null)
			{
				//The program will search for aisle seats in economy class
				seat_available = flight.get_seat_map().queryAvailableEconomySeat(SeatType.AISLE);
				
				//If this seat is found
				if(seat_available.get_seat_type() == SeatType.AISLE)
				{
					//Search for a seat at the side
					Seat side_seat = flight.get_seat_map().getLeft(seat_available);
					
					//If the seat at the side is not an aisle seat
					if(side_seat.get_seat_type() != SeatType.AISLE)
					{
						//Sets the seats as reserved
						side_seat.set_reserved();
						seat_available.set_reserved();
						
						//Returns the available seat
						return seat_available;
					}
					//If it is an AISLE seat
					else
					{
						//Search for a seat at the side
						side_seat = flight.get_seat_map().getRight(seat_available);
						//If the seat at the side is not an aisle seat
						if(side_seat.get_seat_type() != SeatType.AISLE)
						{
							//Sets the seats as reserved
							side_seat.set_reserved();
							seat_available.set_reserved();
							
							//Returns the available seat
							return seat_available;
						}
						//If it is an aisle seat, null is returned
						else
						{
							return null;
						}
					}
				}
				//If an aisle seat is not found, return nulll
				else
				{
					return null;
				}
			}
			
			//If it the program found a seat
			if(seat_available != null)
			{
				//Set the seat to reserved
				seat_available.set_reserved();
				
				//Returns the seat
				return seat_available;
			}
			//If there is any seat
			else
			{
				//The reservation is not made
				return null;
			}
		}
		
		//If it the program found a seat
		if(seat_available != null)
		{
			//Set the seat to reserved
			seat_available.set_reserved();
			
			//Returns the seat
			return seat_available;
		}
		//If there is any seat
		else
		{
			//The reservation is not made
			return null;
		}
	}
}