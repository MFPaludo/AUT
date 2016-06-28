import java.util.Scanner;

public class InputApplication 
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Please enter a number: ");
		int number = keyboard.nextInt(); //when I enter the number and type ENTER, the ENTER command goes to the next scan
		keyboard.nextLine(); //if I don't have this here
		System.out.println("Please enter a name: ");
		String name = keyboard.nextLine(); //I won't be able to write here, because it will take ENTER as its command
	}
}
