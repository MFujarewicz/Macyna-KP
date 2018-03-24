public class bigcar extends car
{
	public String trunk;



	bigcar(String driver, String p1, String p2, String p3, String p4)
	{
		super(driver, p1, p2, p3, p4);
		trunk = "nic";
	}

	public void passengerList()
	{
		super.passengerList();
		System.out.println(trunk);
	}

	
}