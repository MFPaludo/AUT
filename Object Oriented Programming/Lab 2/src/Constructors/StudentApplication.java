package Constructors;

import java.util.Scanner;

public class StudentApplication 
{

	public static void main(String[] args) 
	{
		Student student1 = new Student("Mateus Felipe", "Paludo", 14885857);
		Student student2 = new Student("Tony", "Stark", 0);
		Student student3 = new Student(null, null, 0);
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Please, enter student's first name:");
		student1.firstname = input.nextLine();
		student2.firstname = student1.firstname;
		
		System.out.println("Please, enter student's last name:");
		student1.lastname = input.nextLine();
		student2.lastname = student1.lastname;
		
		System.out.println("Please, enter student's ID:");
		student1.studentID = input.nextInt();
		
		System.out.println("Calling 3 parameter constructor:");
		System.out.println("Student firstname: " + student1.firstname + " lastname: " + student1.lastname + " ID: " + student1.studentID);
		
		System.out.println("Calling 2 parameter constructor:");
		System.out.println("Student firstname: " + student2.firstname + " lastname: " + student2.lastname + " ID: " + student2.studentID);
		
		System.out.println("Calling zero parameter constructor:");
		System.out.println("Student firstname: " + student3.firstname + " lastname: " + student3.lastname + " ID: " + student3.studentID);
	}

}
