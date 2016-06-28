/**
 * 
 * This class stores Seat objects in a grid and provides
 * basic functionality to return a seat at a specified (row,column) position.
 * 
 * The seating plan can be initialised to a default size or a 2-dimensional grid may be provided.
 * 
 * @author kjohnson
 * 
 * */
public class CinemaSeatPlan {

	private Seat seatPlan[][];
	private final int SEATPLAN_SIZE=10;
	//----------------------------------------------------------------------------------------
	/**
	 * Returns a Boolean value that determins if row,column specify a valid seat in the cinema seating plan.
	 * @param row, an integer specifying the row
	 * @param column, an integer specifying the column
	 * @return true or false depending on the size of the 2D array for the cinema seating plan
	 * */
	public boolean isValidSeatPosition(int row,int column){
		return (row >= 0)&&(row < this.seatPlan.length)&&(column >= 0)&&(column < this.seatPlan[row].length);
	}
	//----------------------------------------------------------------------------------------
	/**
	 * Returns a Seat stored at the [row][column] indicies of the 2-dimensional seating plan array
	 * If the indices represent an invalid array location, then null is returned.
	 * @param row, an integer specifying the row
	 * @param column, an integer specifying the column
	 * @return the Seat at the specified location
	 * 
	 * */
	//----------------------------------------------------------------------------------------
	public Seat getSeat(int row, int column){
		if(isValidSeatPosition(row,column))
		{
			return this.seatPlan[row][column];
		}
		return null;
	}
	//----------------------------------------------------------------------------------------
	/**
	 * 
	 * Returns a string representation of the seating plan, as a grid using the toString methods
	 * for Seat objects
	 * @return a string representing the seating plan
	 * 
	 * */
	public String toString(){
		String str = "";
		for(int row=0;row<this.seatPlan.length;row++)
		{
			for(int column=0;column<this.seatPlan[row].length;column++)
			{
				str+= getSeat(row,column).toString()+" ";
			}
			str+="\n";
		}
		return str;
	}
		
	//----------------------------------------------------------------------------------------
	/**
	 * This constructor takes as input an initialised seating plan
	 * */
	public CinemaSeatPlan(Seat[][] seatPlan){
		this.seatPlan = seatPlan;
	}
	//----------------------------------------------------------------------------------------
	/**
	 * The default constructor initialises the seating plan to a square SEATPLAN_SIZE x SEATPLAN_SIZE seating plan with STANDARD SeatType,
	 * 
	 * */
	public CinemaSeatPlan(){
		this.seatPlan = new Seat[SEATPLAN_SIZE][SEATPLAN_SIZE];
		for(int row=0;row<this.seatPlan.length;row++)
		{
			for(int column=0;column<this.seatPlan[row].length;column++)
			{
				this.seatPlan[row][column] = new Seat(SeatType.STANDARD);
			}
		}
	}
	//----------------------------------------------------------------------------------------

}
