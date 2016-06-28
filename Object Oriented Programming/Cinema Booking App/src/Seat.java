/**
 * This class stores data about a Seat: it's reservation status and the type of the seat.
 * 
 * 
 * */
public class Seat {
	private SeatType seatType;
	private boolean reserved;

	//----------------------------------------------------------------------------------------
	/**
	 * Returns a string representation if the seat, using the first character of
	 * the type of string, and and X to indicate if it is reserved
	 * @return a string of the form e.g. S[X] or P[ ] depending on the Seat's state
	 * 
	 * */
	public String toString(){
		return this.getType().toString()+"["+(isReserved()?"X":" ")+"]";
	}
	//----------------------------------------------------------------------------------------
	/**
	 * Returns a Boolean value representing the reservation state of the Seat object
	 * @return a Boolean, true if reserved and false otherwise.
	 * */
	public boolean isReserved(){
		return this.reserved;
	}
	//----------------------------------------------------------------------------------------
	/**
	 * Sets the reservation state
	 * @param a Boolean value, true if the Seat is being reserved and false otherwise 
	 * 
	 * */
	public void setReserved(boolean reserved){
		this.reserved=reserved;
	}
	//----------------------------------------------------------------------------------------
	/**
	 * Sets the type of the Seat object
	 * @param a SeatType enum, representing the type that the seat is to be set to
	 * */
	public Seat(SeatType st){
		this.seatType = st;

	}
	//----------------------------------------------------------------------------------------
	/**
	 * gets the type of the Seat object
	 * @return a SeatType enum, representing the type of this seat.
	 * */
	public SeatType getType() {
		return this.seatType;
	}
	//----------------------------------------------------------------------------------------
}
