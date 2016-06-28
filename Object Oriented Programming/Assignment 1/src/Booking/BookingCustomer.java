package Booking;

import java.util.Scanner;

public class BookingCustomer 
{
	//introduces the variables
	private String name;
	private int age;
	private boolean isStudent;
	
	//constructor with inputs for name, age and student
	public BookingCustomer(String name, int age, boolean isStudent)
	{
		this.name = name;
		this.age = age;
		this.isStudent = isStudent;
	}
	
	//private variables needs get and set methods to be used
	public String getName()
	{
		return this.name;
	}
	public void setName(String name)
	{
		this.name = name;
	}
	
	public int getAge()
	{
		return this.age;
	}
	public void setAge(int age)
	{
		this.age = age;
	}
	
	public boolean getStudent()
	{
		return this.isStudent;
	}
	public void setStudent(boolean student)
	{
		this.isStudent = student;
	}
	
}