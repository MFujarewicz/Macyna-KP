public class test
{
	public static void main(String[] args) 
	{
		bigcar autko = new bigcar("tata", "mama", "ja", "adam", "babcia");
		bigcar autko2 = new bigcar("tata", "mama", "ja", "adam", "babcia");
		
		System.out.println(autko.hashCode());
		System.out.println(autko.hashCode());
		System.out.println(autko2.hashCode());
		System.out.println(autko2.hashCode());

		System.out.println((autko.hashCode()==autko.hashCode() ? "tak" : "nie"));

	}
}