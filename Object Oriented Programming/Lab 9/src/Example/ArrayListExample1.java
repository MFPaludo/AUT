package Example;

import java.util.ArrayList;
import java.util.Collections;

public class ArrayListExample1 
{
	public static void main(String[] args)
	{
		ArrayList<Integer> list = new ArrayList();
		
		list.add(5);
		list.add(1);
		list.remove(0);
		list.add(3);
		list.add(-1);
		list.remove(3);
		list.add(0);
		
		Collections.sort(list);
	}
}
