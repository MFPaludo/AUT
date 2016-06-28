package TheAnimalHierarchy;

import java.util.Scanner;

public class AnimalApplication 
{

	public static void main(String[] args) 
	{
		//initiates the Scanner that will be used later
		Scanner input = new Scanner(System.in);
		
		//declares an array of the Animal class with 4 elements
		Animal[] animals = new Animal[4];
		
		//function to ask the user to create the objects
		for(int i = 0; i < 4; i++)
		{
			//1 for Dog and 2 for Cat
			System.out.println("Type 1 to create a Dog Object or 2 to create a Cat object");
			
			//takes input from the user
			int animalNumber = input.nextInt();
			
			//if the user input 1
			if(animalNumber == 1)
			{
				//creates a Dog object
				animals[i] = new Dog();
			}
			//if the user input 2
			else if(animalNumber == 2)
			{
				//creates a Cat object
				animals[i] = new Cat();
			}
			//input doesn't applies to the context
			else
			{
				//crash message
				System.out.println("I'm sorry Dave, I'm afraid I can't do that!");
			}
		}
		
		//jumps lines
		System.out.println("\n");
		
		//declares and initiates the feedAnimal variable
		int feedAnimal = 0;
		
		//function to ask the user to feed the animals
		do
		{
			//asks the user to select which animal he wants to feed
			System.out.println("Select an animal to feed by entering a number within the range: 0 to 3");
			
			//function to print the animals status
			for(int a = 0; a < 4; a++)
			{
				//prints each animal status
				System.out.println(a + " " + animals[a]);
			}
			
			//takes input from the user
			feedAnimal = input.nextInt();
			
			//verifies if the input applies to the situation
			if(feedAnimal >= 0 && feedAnimal < 4)
			{
				animals[feedAnimal].feed();
			}
			//input doesn't applies to the context
			else
			{
				//crash message
				System.out.println("I'm sorry Dave, I'm afraid I can't do that!");
			}
		} while(feedAnimal >= 0 && feedAnimal < 4);
		
		//ends the program
		System.out.println("Input out of range, quitting.");
	}

}
