package NitFlux;

public class Subscriber 
{
	private String name;
	private String email;
	private int months;
	private double pay;
	private int bank;
	
	public Subscriber(String name, String email, int months, double pay, int bank)
	{
		this.name = name;
		this.email = email;
		this.months = months;
		this.pay = pay;
		this.bank = bank;
	}
	
	public String getName()
	{
		return this.name;
	}
	public void setName(String name)
	{
		this.name = name;
	}
	
	public String getEmail()
	{
		return this.email;
	}
	public void setEmail(String email)
	{
		this.email = email;
	}
	
	public int getMonths()
	{
		return this.months;
	}
	public void setMonths(int months)
	{
		this.months = months;
	}
	
	public double getPay()
	{
		return this.pay;
	}
	public void setPay(double pay)
	{
		this.pay = pay;
	}
	
	public int getBank()
	{
		return this.bank;
	}
	public void setBank(int bank)
	{
		this.bank = bank;
	}
}
