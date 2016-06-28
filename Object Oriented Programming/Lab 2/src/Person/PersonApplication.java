package Person;

import java.util.Scanner;

public class PersonApplication 
{

	public static void main(String[] args) 
	{
		Person aPerson = new Person(20, 68, true, 'M');
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Please enter the person's age:");
		aPerson.age = input.nextInt();
		
		System.out.println("Please enter the person's weight:");
		aPerson.weight = input.nextDouble();
		
		System.out.println("Is the person a student (true/false):");
		aPerson.isStudent = input.hasNextBoolean();
		input.nextLine();
		
		System.out.println("Please enter the person's gender (M/F):");
		aPerson.gender = input.next().charAt(0);
		
		System.out.println("Person: age: " + aPerson.age + " weight: " + aPerson.weight + " student? " + aPerson.isStudent + " gender: " + aPerson.gender);
	}

}
