package Example;

public class BankApplication 
{
	public static void main(String[] args) 
	{
		BankAccount anAccount = new BankAccount("Paludo");
		
		System.out.println(anAccount.getCustomerName());
		anAccount.setCustomerName("Matt");
		System.out.println(anAccount.getCustomerName());
		anAccount.setCustomerName(null);
		System.out.println(anAccount.getCustomerName());
		
		System.out.println(anAccount.getBalance());
		anAccount.deposit(1000);
		System.out.println(anAccount.getBalance());
		anAccount.withdraw(500);
		System.out.println(anAccount.getBalance());
		anAccount.withdraw(501);
		System.out.println(anAccount.getBalance());
	}
}
