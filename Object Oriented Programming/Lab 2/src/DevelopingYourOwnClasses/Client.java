package DevelopingYourOwnClasses;

public class Client 
{
	private String name;
	private String account;
	
	public Client(String name, String account)
	{
		this.name = name;
		this.account = account;
	}
	
	public String getName()
	{
		return this.name;
	}
	public void setName(String name)
	{
		this.name = name;
	}
	
	public String getAccount()
	{
		return this.account;
	}
	public void setTitle(String account)
	{
		this.account = account;
	}
}
