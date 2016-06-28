package Example;

public class MyArrayExample 
{

	public static void main(String[] args) 
	{
		BitGrid bitGrid = new BitGrid(4);
		
		System.out.println(bitGrid);
		
		bitGrid.initialise(1);
		System.out.println(bitGrid);
		
		bitGrid.setGridValue(1, 2, 0);
		
		System.out.println(bitGrid.sumRow(1));
	}

}
