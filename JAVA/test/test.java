public class test
{
	public static void main(String[] args) 
	{
		person student = new person(19, 172);

		System.out.println("Wiek: " + student.age);
		System.out.println("Wzrost: " + student.height);
		System.out.println(student.method());

		
	}
}