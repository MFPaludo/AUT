package Example;

import java.util.ArrayList;
import java.util.Collections;

public class ArrayExample2 
{
	public static void main(String[] args)
	{
		ArrayList<Customer> customers = new ArrayList<Customer>();
		
		customers.add(new Customer("Ken", 40));
		customers.add(new Customer("Earl", 25));
		customers.add(new Customer("Alice", 30));
		customers.add(new Customer("Frank", 18));
		
		Collections.sort(customers);
	}
}
