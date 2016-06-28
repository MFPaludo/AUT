package Customer;
import java.util.*;

public class CustomerApplication 
{

	public static void main(String[] args) 
	{
		//constructor  with default switable values
		Customer aClient = new Customer("Paludo", 21, true);
		
		//iniciates a scanner
		Scanner input = new Scanner(System.in);
		
		//asks the user to enter some information
		System.out.println("Enter the customer's name: ");
		//assigns this information to the object using the set method
		aClient.setName(input.nextLine());
		
		System.out.println("Enter the customer's age: ");
		aClient.setAge(input.nextInt());
		
		//asks if the customer is a student or not
		System.out.println("Is the customer a student? Type, Y for YES and N for NO.");
		char yesno = input.next().charAt(0);
		//if y
		if (yesno == 'Y' || yesno == 'y')
		{
			//condition is true
			aClient.setStudent(true);
		}
		//if not
			else if (yesno == 'N' || yesno == 'n')
			{
				//false
				aClient.setStudent(false);
			}
		
		//prints the object
		System.out.println(aClient);
	}
}