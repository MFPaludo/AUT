package TheSimpleDateClass;

public class SimpleDateApplication 
{

	public static void main(String[] args) 
	{
		SimpleDate d1 = new SimpleDate();
		d1.setDay(22);
		d1.setMonth(3);
		d1.setYear(2016);
		
		System.out.println(d1);
		
		SimpleDate d2 = new SimpleDate(14, 03, 2016);
		System.out.println(d2);
	}

}
