package Example;

public class BankApplication {

	public static void main(String[] args) 
	{
		BankAccount bankAccount = new BankAccount("Ken Johnson");
		System.out.println(bankAccount);
		
		bankAccount.deposit(10.00);
		System.out.println(bankAccount);
		
		bankAccount.deposit(2.00);
		System.out.println(bankAccount);
		
		bankAccount.withdraw(3.75);
		System.out.println(bankAccount);
		
		SmartSaver smartAccount = new SmartSaver("Robin Banks");
		System.out.println(smartAccount);
		
		//this will deposit 105 dollars
		smartAccount.deposit(101);
		System.out.println(smartAccount);
		
		smartAccount.withdraw(10);
		System.out.println(smartAccount);
	}

}
