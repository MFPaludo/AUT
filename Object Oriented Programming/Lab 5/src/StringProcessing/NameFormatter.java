package StringProcessing;

public class NameFormatter 
{
	String fullName;
	
	public String toString()
	{
		return this.initials();
	}
	
	public NameFormatter(String fullName)
	{
		this.fullName = fullName;
	}
	
	public String first()
	{
		String[] firstName = fullName.split(" ");
		return firstName[0];
	}
	
	public String last()
	{
		String[] lastName = fullName.split(" ");
		return lastName[1];
	}
	
	public String initials()
	{
		String[] initials = fullName.split(" ");
		return
				initials[0].substring(0, 1) + initials[1].substring(0, 1);
	}
	
	public boolean equals(NameFormatter nf)
	{
		return this.fullName == nf.fullName;
	}
}
