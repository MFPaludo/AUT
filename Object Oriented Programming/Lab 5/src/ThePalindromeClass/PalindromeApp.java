package ThePalindromeClass;

public class PalindromeApp {

	public static void main(String[] args) 
	{
		Palindrome p1 = new Palindrome("Abba");
		System.out.println("Palindrome p1 = " + p1);
		
		Palindrome p2 = new Palindrome("Anne, I vote more cars race Rome to Vienna");
		System.out.println("Palindrome p2 = " + p2);
		
		Palindrome p3 = new Palindrome();
		System.out.println("Palindrome p3 = " + p3);
		
		/*p3.setPalindrome("I'm not a palindrome!");
		System.out.println("Palindrome p3 = " + p3);*/
		
		/*p3.setPalindrome("If I had a hi-fi...");
		System.out.println("Palindrome p3 = " + p3);*/
	}

}
