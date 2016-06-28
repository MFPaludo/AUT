package Example;

public class BankAccount 
{
	private String customerName;
	private int balance;

	public BankAccount(String customerName)
	{
		this.customerName = customerName;
		this.balance = 0;
	}
	
	public void setCustomerName(String customerName)
	{
		if(customerName != null)
		{
			this.customerName = customerName;
		}
	}
	
	public String getCustomerName()
	{
		return this.customerName;
	}
	
	public int getBalance()
	{
		return this.balance;
	}
	
	public void withdraw(int amount)
	{
		if(amount <= this.balance)
		{
			this.balance -= amount;
		}
	}
	
	public void deposit(int amount)
	{
		if(amount > 0)
		{
			this.balance += amount;
		}
	}
}
