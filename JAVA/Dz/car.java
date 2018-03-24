public class car
{

	private	int maxSpeed;
	private String driver;
	private String[] passenger;

	car()
	{
		maxSpeed = 0;
		driver = "";
		passenger = new String[4];
	}

	car(String driver, String p1, String p2, String p3, String p4)
	{
		this.driver = driver;

		passenger = new String[] {p1, p2, p3, p4};
	}

	car(String driver)
	{
		maxSpeed = 0;
		this.driver = driver;
		passenger = new String[4];

	}

	public String driver()
	{
		return (this.driver);
	}

	public void passengerList()
	{
		for (int i=0; i<passenger.length; i++)
		{
			System.out.println(passenger[i]);
		}
	}
} 

