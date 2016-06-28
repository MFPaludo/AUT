package ScoreTables;

public class ScoreTable 
{
	public static final int MAX_PLAY = 3;
	public static final int MAX_SCORE = 4;
	private Score[][] scoreTable;
	
	public String toString()
	{
		String gridString = "";
		
		for(int row = 0; row < scoreTable.length; row++)
		{
			for(int column = 0; column < scoreTable[row].length; column++)
			{
				gridString += scoreTable[row][column] + ",";
			}
			gridString += "\n";
		}
		
		return gridString;
	}
	
	public ScoreTable()
	{
		this.scoreTable = new Score[MAX_PLAY][MAX_SCORE];
	}
	
	public void update(int row, int column, Score aScore)
	{
		scoreTable[row][column] = aScore;
	}
}
