package TheCoinChangerMachine;

public class CoinChanger 
{
	private int ten;
	private int twenty;
	private int fifty;
	private int oneDollar;
	private int twoDollar;
	
	
	//------------------------------
	//To string method to represent the object
	public String toString()
	{
		return
				/*"You input:"
				+ "\n" +
				this.ten + " coins of 10 cents;"
				+ "\n" +
				this.twenty + " coins of 20 cents;"
				+ "\n" +
				this.fifty + " coins of 50 cents"
				+ "\n" +
				this.oneDollar + " one dollar notes;"
				+ "\n" +
				this.twoDollar + " two dollar notes."
				+ "\n" + "\n" +*/
				"\n" +
				"The total value of the coin collection is: $" + dollars() + "." + cents()
				+ "\n" +
				"Please take your receipt!"
				+ "\n";
	}
	
	//------------------------------
	//Constructor for the object
	public CoinChanger(int ten, int twenty, int fifty, int oneDollar, int twoDollar)
	{
		this.ten = ten;
		this.twenty = twenty;
		this.fifty = fifty;
		this.oneDollar = oneDollar;
		this.twoDollar = twoDollar;
	}
	
	//------------------------------
	//Get and set methods
	public int getTen()
	{
		return this.ten;
	}
	public void setTen(int ten)
	{
		this.ten = ten;
	}
	
	public int getTwenty()
	{
		return this.twenty;
	}
	public void setTwenty(int twenty)
	{
		this.twenty = twenty;
	}
	
	public int getFifty()
	{
		return this.fifty;
	}
	public void setFifty(int fifty)
	{
		this.fifty = fifty;
	}
	
	public int getOneDollar()
	{
		return this.oneDollar;
	}
	public void setOneDollar(int oneDollar)
	{
		this.oneDollar = oneDollar;
	}
	
	public int getTwoDollar()
	{
		return this.twoDollar;
	}
	public void setTwoDollar(int twoDollar)
	{
		this.twoDollar = twoDollar;
	}
	
	//------------------------------
	//Calculates the total cents
	int computeChange()
	{
		int totalCents = ten * 10 + twenty * 20 + fifty * 50 + oneDollar * 100 + twoDollar * 200;
		return totalCents;
	}
	
	//------------------------------
	//Calculates the dollars
	int dollars()
	{
		int dollars = computeChange() / 100;
		return dollars;
	}
	
	//------------------------------
	//Calculates the cents, the rest of the operation
	int cents()
	{
		int cents = computeChange() % 100;
		return cents;
	}
}
