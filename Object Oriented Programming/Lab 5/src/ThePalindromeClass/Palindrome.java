package ThePalindromeClass;

public class Palindrome
{
	String palindrome;
	String teste = "teste";
	
	public String toString()
	{
		return
				this.palindrome;
	}
	
	//------------------------------
	//Constructor
	public Palindrome(String palindrome)
	{
		this.palindrome = palindrome;
	}
	
	//------------------------------
	//Empty constructor
	public Palindrome()
	{
	}
	
	//------------------------------
	//Reverse
	private String reverse(String input)
	{
		input = "";
		
		for(int i = palindrome.length()-1; i >= 0; i--)
		{
			input = input + palindrome.charAt(i);
		}
		
		return input;
	}
	
	//------------------------------
	//Takes out numbers and spaces
	private String alphaNumeric(String input)
	{
		input = palindrome;
		input = input.replaceAll("[^A-Za-z]", "");
		return input;
	}
	
	//------------------------------
	//Check if is a palindrome
	private boolean isPalindrome(String input)
	{
		String lcInput = alphaNumeric(input).toLowerCase();
		return reverse(lcInput).equals(lcInput);
	}
	
	//------------------------------
	//Set method
	//If it is a palindrome, assings the input to the palindrome
	public void setPalindrome(String input)
	{
		if(isPalindrome(input) == true)
		{
			this.palindrome = input;
		}
		else
		{
			this.palindrome = " ";
		}
	}
}
