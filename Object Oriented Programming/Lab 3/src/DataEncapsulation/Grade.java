package DataEncapsulation;

public class Grade 
{
	private int percentage;
	
	public Grade(int percentage)
	{
		this.percentage = percentage;
	}
	
	public void setPercentage(int percentage)
	{
		if ((percentage >= 0)&&(percentage <= 100))
		{
			this.percentage = percentage;
		}
		else
		{
			this.percentage = 0;
		}
	}
	
	public int getPercentage()
	{
		return this.percentage;
	}
}
