package Example;

//creates an extension for the BankAccount class
public class SmartSaver extends BankAccount
{
	//overrides a method in the main object class
	@Override
	public void deposit(double amount)
	{
		//uses the deposit functionality in the object class
		super.deposit(amount);
		if(amount > 100)
		{
		//bonus amount of 5%
		super.deposit(amount*0.05);
		}
	}
	
	//refers to the customerName in the BankAccount class
	//set the initial balance to 50
	public SmartSaver(String customerName)
	{
		super(customerName);
		this.deposit(50);
		//or
		//this.balance = 50.0;
	}
	
	@Override
	public void withdraw(double amount)
	{
		//no withdraw
	}
	
}
