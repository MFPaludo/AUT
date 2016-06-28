package TheStudentClass;

public class Student 
{
	private String firstName;
	private String lastName;
	private int studentID;
	
	public String toString()
	{
		return
		"Student's first name: " + this.firstName + ", last name: " + this.lastName + ", ID: " + this.studentID;
	}
	
	public Student(String firstName, String lastName, int StudentID)
	{
		this.firstName = firstName;
		this.lastName = lastName;
		this.studentID = studentID;
	}
	
	public Student(int StudentID)
	{
		this.studentID = studentID;
	}
	
	public void setFirstName(String firstName)
	{
		this.firstName = firstName;
	}
	public String getFirstName()
	{
		return this.firstName;
	}
	
	public void setLastName(String lastName)
	{
		this.lastName = lastName;
	}
	public String getLastName()
	{
		return this.lastName;
	}
	
	public void setStudentID(int studentID)
	{
		this.studentID = studentID;
	}
}
