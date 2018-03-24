public class primeNumbers
{
	int[] primes;// = new int[1000000];

	public primeNumbers(int n)
	{
		int[] primesTemp = new int[n];
		int pos = 0;
		boolean isPrime;
		for (int i=2; i<=n; i++)
		{
			isPrime = true;
			for (int div=2; div*div<=i; div++)
			{
				if(i%div == 0)
				{
					isPrime = false;
					break;
				}
			}
			if(isPrime)
			{
				primesTemp[pos] = i;
				pos++;
			}
		}


		int[] primes = new int[pos];

		for (int i=0; i<pos; i++)
		{
			primes[i] = primesTemp[i];
		}




	}


	public int number(int n)
	{
		return primes[n];
	}
}