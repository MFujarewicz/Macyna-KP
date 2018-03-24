public class test
{
	public static void main(String[] args) 
	{
		int n = 0;
		int i = 0;
		boolean isInt = false;

		while(!isInt)
		{
			try
			{
				n = Integer.parseInt(args[i]);
				isInt = true;
			}
			catch (NumberFormatException ex)
			{
				System.out.println(args[i] + " zla dana");
				i++;
				isInt = false;
				n = -1;
			}

			if (n<0 && isInt)
			{
				isInt = false;
				i++;
			}
		}

		primeNumbers prms = new primeNumbers(n);
		//System.out.println(n);
		//System.out.println(i);

		for (i++; i<args.length; i++)
		{ 
			try
			{
				n = Integer.parseInt(args[i]);
			}
			catch (NumberFormatException ex)
			{
				System.out.println(args[i] + " zla dana");
				continue;
			}
			if(n < 0)
			{
				System.out.println(n + " spoza zakresu");
				continue;
			}
			if(prms.number(n) == 0)
			{
				System.out.println(n + " spoza zakresu");
				continue;
			}
			System.out.println(n + " - " + prms.number(n));
		}
	}
}