package Example;

public class BankAccount 
{
	private String customerName;
	//an access modifier that enables subclasses to access this variable
	protected double balance;
	
	//prints out the object
	public String toString()
	{
		return 
				this.getCustomerName() + " $" + String.format("%.2f", this.getBalance());
	}
	
	//constructor
	public BankAccount(String name)
	{
		this.customerName = name;
		this.balance = 0.0;
	}
	
	//get balance
	public double getBalance()
	{
		return this.balance;
	}
	
	//deposit
	public void deposit(double amount)
	{
		this.balance += amount;
	}
	
	//withdraw
	public void withdraw(double amount)
	{
		if(this.balance >= amount)
		{
			balance -= amount;
		}
	}
	
	//get and set methods
	public String getCustomerName()
	{
		return customerName;
	}
	public void setCustomerName(String customerName)
	{
		this.customerName = customerName;
	}
}
