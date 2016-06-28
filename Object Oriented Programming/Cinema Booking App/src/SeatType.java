/**
 * An enumeration which maintains list of seat types and their costs.
 * 
 * */
public enum SeatType {
	
	/**
	 * Costs $10.25 to reserve a standard seat.
	 * 
	 * */
	STANDARD(10.25),
	/**
	 * Costs $30.99 to reserve a premium seat.
	 * 
	 * */
	PREMIUM(30.99);
	 
	private double cost;
	//----------------------------------------------------------------------------------------
	private SeatType(double cost){		 
		this.cost=cost;	
	}
	//----------------------------------------------------------------------------------------
	/**
	 * returns a string with a single character, representing the type of seat. 
	 * @return a string of the form "S", "P" etc...
	 *
	 * 
	 **/
	public String toString(){
		String abbrv = this.name().substring(0,1);		
		return abbrv;
	}
	//----------------------------------------------------------------------------------------
	/**
	 * returns the cost of reserving a seat of this type
	 * @return a double representing the cost
	 * */
	public double getCost() {		 
		return cost;
	}
	//----------------------------------------------------------------------------------------
}
