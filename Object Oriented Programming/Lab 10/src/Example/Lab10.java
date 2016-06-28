package Example;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.ListIterator;

public class Lab10 
{
	public static void removeStrings(ArrayList<String> list)
	{
		ListIterator<String> iterate = list.listIterator();
		
		while(iterate.hasNext())
		{
			String s = iterate.next();
			
			if(s.length() <= 3)
			{
				iterate.remove();
				iterate.add(s.toUpperCase());
			}
		}
	}

	public static void main(String[] args) 
	{
		ArrayList<String> list = new ArrayList<String>(Arrays.asList(new String[]{"Hello", "world", "how", "are", "you?"}));
		
		System.out.println(list);
		removeStrings(list);
		System.out.println(list);
	}

}
