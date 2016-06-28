//Class to store the seat position
public class SeatPosition 
{
	//****************************************************************************************************
	//Declaring variables to be used in the program
	private int row;
	private char column;
	
	//****************************************************************************************************
	//toString method that represents the object
	public String toString()
	{
		return
				" " + this.row + this.column;
	}
	
	//****************************************************************************************************
	//Object constructor
	public SeatPosition(int row, char column)
	{
		this.row = row;
		this.column = column;
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Return the row
	public int get_row()
	{
		//Returns the row
		return this.row;
	}
	
	//****************************************************************************************************
	//Not in the brief
	//Return the row
	public char get_column()
	{
		//Returns the column
		return column;
	}
}
