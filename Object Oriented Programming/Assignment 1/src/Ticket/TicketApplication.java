package Ticket;

public class TicketApplication 
{
	
	public static void main(String[] args) 
	{
		//constructor for film with values
		TicketFilm aTicketFilm = new TicketFilm("Suicide Squad", 'M');
		//constructor for customer information with values
		TicketCustomer aTicketCustomer = new TicketCustomer("Mateus Felipe Paludo", 20, true);
		
		//prints out the toString in the ticket object
		System.out.println(aTicketFilm);
		//prints out the toString in the Customer object
		System.out.println(aTicketCustomer);
		//the program is immutable, and doesn't use the SET methods
	}
	
}