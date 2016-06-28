package Example;

public class BitGrid 
{
	private int [][] bitGrid;
	
	public String toString()
	{
				String gridString = "";
				
				for(int row = 0; row < bitGrid.length; row++)
				{
					for(int column = 0; column < bitGrid[row].length; column++)
					{
						gridString += bitGrid[row][column] + ",";
					}
					gridString += "\n";
				}
				
				return gridString;
	}
	
	public BitGrid(int n)
	{
		this.bitGrid = new int[n][n];
		
	}
	
	public void setGridValue(int row, int column, int newValue)
	{
		if((row >= 0) && (row < this.bitGrid.length))
		{
			if((column >= 0) && (column < this.bitGrid[row].length))
			{
				this.bitGrid[row][column] = newValue;
			}
		}
	}
	
	public int sumRow(int row)
	{
		int sum = 0;
		
		if((row >= 0) && (row < this.bitGrid.length))
		{
			for(int column = 0; column < bitGrid[row].length; column++)
			{
				sum += this.bitGrid[row][column];
			}
		}
		
		return sum;
	}
	
	public void initialise(int bitValue)
	{
		for(int row = 0; row < bitGrid.length; row++)
		{
			for(int column = 0; column < bitGrid[row].length; column++)
			{
				this.bitGrid[row][column] = bitValue;
			}
		}
	}
}
