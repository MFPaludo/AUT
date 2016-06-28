import java.util.Scanner;
/**
 * 
 * This class provides a user interface which enables the customer
 * to view a cinema seating plan, choose and reserve seats. 
 * The user receives confirmation of the reservation and its cost.
 * 
 * @author kjohnson
 * 
 * */
public class CinemaSeatReservationApp {

	static SeatType s = SeatType.STANDARD;
	static SeatType p = SeatType.PREMIUM;

	//a hard-coded array which defines a seating plan for a small cinema
	static Seat[][] smallCinema = new Seat[][]{
		{new Seat(s),new Seat(s)},
		{new Seat(p),new Seat(p)}
	};

	//a hard-coded array which defines a seating plan for a larger cinema
	static Seat[][] largeCinema = new Seat[][]{
		{new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s)},
		{new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s)},
		{new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p)},
		{new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p)},
		{new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p),new Seat(p)},			
		{new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s)},
		{new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s),new Seat(s)}
	};

	public static void main(String[] args) {

		CinemaSeatPlan csp = new CinemaSeatPlan(largeCinema);//try with smallCinema

		Scanner keyboard = new Scanner(System.in);
		String requestInput = "";//initialise the input string to empty.
		do{
			System.out.println(csp);
			System.out.println("Enter the row and column of the seat you wish to reserve. e.g. 3 4");
			requestInput = keyboard.nextLine();
			//----------------------------------------------------------------------------------------	
			String[] tokens = requestInput.split(" ");
			if(tokens.length == 2){//make sure that two numbers were input
				int row = new Integer(tokens[0]);//no error detection for converting string to integer.
				int column = new Integer(tokens[1]);

				Seat reserved = csp.getSeat(row, column);
				if(reserved!=null)//null is returned if row and column do not specify a valid seat.
				{
					if(reserved.isReserved())
					{
						System.out.println("Sorry, this seat is already reserved! Please select another seat.");
					}
					else
					{					
						System.out.println("Seat reservation for a "+reserved.getType().name().toLowerCase()+" costs: "+reserved.getType().getCost());
						reserved.setReserved(true);//reserves the seat
					}
				}
				else
				{
					System.out.println("That is not a valid seat location. Please try again.\n");
				}
			}else {
				if (!requestInput.isEmpty()) 
					System.out.println("That input is in the incorrect format. Please try again.\n");
			}
		}while(!requestInput.isEmpty());
	}
}