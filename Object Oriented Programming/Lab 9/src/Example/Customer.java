package Example;

public class Customer implements Comparable<Customer>
{
	public String name;
	public Integer age;
	
	public String toString()
	{
		return this.name+"("+age+")";
	}
	
	public Customer(String name, Integer age)
	{
		this.name = name;
		this.age = age;
	}

	@Override
	public int compareTo(Customer o) 
	{
		return this.age.compareTo(o.age);
	}
}
