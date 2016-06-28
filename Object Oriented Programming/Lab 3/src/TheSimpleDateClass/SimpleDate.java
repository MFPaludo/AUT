package TheSimpleDateClass;

public class SimpleDate 
{
	private int day;
	private int month;
	private int year;
	
	public String toString()
	{
		return
				this.day + "/" + this.month + "/" + this.year;
	}
	
	//empty constructor
	public SimpleDate() 
	{
	}
	
	//constructor
	public SimpleDate(int day, int month, int year)
	{
		this.day = day;
		this.month = month;
		this.year = year;
	}

	//get and set for day
	public void setDay(int day)
	{
		if((day >= 1) && (day <= 31))
		{
			this.day = day;
		}
		else
		{
			this.day = 1;
		}
	}
	public int getDay() 
	{
		return this.day;
	}
	
	//get and set for month
	public void setMonth(int month)
	{
		if((month >= 1) && (month <= 12))
		{
			this.month = month;
		}
		else
		{
			this.month = 1;
		}
	}
	public int getMonth()
	{
		return this.month;
	}
	
	//get and set for year
	public void setYear(int year)
	{
		
		if((year >= 2000) && (year <= 2016))
		{
			this.year = year;
		}
		else
		{
			year = 2016;
		}
	}
	public int getYear()
	{
		return this.year;
	}
	
	//triple set method
	public void setDate(int day, int month, int year)
	{
		if((day >= 1) && (day <= 31))
		{
			this.day = day;
		}
		else
		{
			this.day = 1;
		}
		
		if((month >= 1) && (month <= 12))
		{
			this.month = month;
		}
		else
		{
			this.month = 1;
		}
		
		if((year >= 2000) && (year <= 2016))
		{
			this.year = year;
		}
		else
		{
			this.year = 2016;
		}
	}
	
	//checks if the date is the same as the previous date
	public boolean isSameDate(SimpleDate aDate)
	{
		return this.day == aDate.getDay() && this.month == aDate.getMonth() && this.year == aDate.getYear();
	}
	
	//gives the last date
	/*public SimpleDate latest(SimpleDate aDate)
	{
		if(isSameDate(aDate))
		{
			return getDay();
		}
		
		return null;
	}*/
	
}
