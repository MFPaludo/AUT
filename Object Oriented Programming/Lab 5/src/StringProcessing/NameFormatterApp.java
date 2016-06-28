package StringProcessing;

public class NameFormatterApp {

	public static void main(String[] args) 
	{
		NameFormatter nf1 = new NameFormatter("Kenneth Johnson");
		NameFormatter nf2 = new NameFormatter("Karen Jameson");
		NameFormatter nf3 = new NameFormatter("Robin Banks");
		
		System.out.println(nf1.equals(nf1));
		
		NameFormatter nf4 = new NameFormatter("Justin Case");
		NameFormatter nf5 = new NameFormatter("Justin Case");
		NameFormatter nf6 = new NameFormatter("Bobby Pinns");
		
		System.out.println(nf4.equals(nf5));
		System.out.println(nf5.equals(nf6));
		
		System.out.println(nf6);
	}

}
