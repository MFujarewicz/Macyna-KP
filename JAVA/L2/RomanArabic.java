import java.util.*;

public class RomanArabic 
{
	private static String[] romanNumbers = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
	private static int[] arabicEquivalent =  {1,    4,   5,    9,  10,   40,  50,   90, 100,  400, 500,  900, 1000};

	public static int romanToArabic(String roman) throws RomanArabicException
	{
		roman = roman.toUpperCase();

		if (!isRoman(roman))
		{
			throw new RomanArabicException(roman);
		}

		int arabic = 0;
		int pos = 12;

		while(pos >= 0)
		{
			if(roman.indexOf(romanNumbers[pos]) == 0)
			{
				arabic+=arabicEquivalent[pos];
				roman = roman.substring(romanNumbers[pos].length());
			}
			else
			{
				pos--;	
			}
		}
			return arabic;
	}

	private static boolean isRoman(String roman)
	{		
		String romanNumbersCharacters = "IVXLCDM";

		for (int i=0; i<roman.length(); i++)
		{
			if (romanNumbersCharacters.indexOf(roman.charAt(i)) == -1)
				return false;
		}


		String tempRoman = roman;
		int charCount = 0;
		int pos = 12; 


		while(pos >= 0)
		{
			if (tempRoman.indexOf(romanNumbers[pos]) == 0)
			{
				tempRoman = tempRoman.substring(romanNumbers[pos].length());
			}
			else
			{
				pos--;
			}
		}

		if(tempRoman.length() != 0)
		{
			return false;
		}




		tempRoman = roman;
		pos = 12;



		while (tempRoman.compareTo("") != 0)
		{


			/*if (tempRoman.indexOf(romanNumbers[pos]) > 0)
			{
				return false;
			}*/
			

			while(tempRoman.indexOf(romanNumbers[pos]) == 0)
			{
				charCount++;
				tempRoman = tempRoman.substring(romanNumbers[pos].length());
			}	
			
			if(pos%2 == 0)
			{
				if (charCount > 3)
					return false;
			}

			if(pos%2 == 1)
			{
				if (charCount > 1)
					return false;
			}



			charCount = 0;
			pos--;

		}



		return true;
	}

	public static String arabicToRoman(int arabic) throws RomanArabicException
	{
		String roman = "";
		int pos = 12;

		if (arabic > 3999 || arabic < 1)
		{
			throw new RomanArabicException(arabic);
		}

		while(arabic != 0)
		{
			if(arabic>=arabicEquivalent[pos])
			{
				roman = roman + romanNumbers[pos];
				arabic-=arabicEquivalent[pos];
			}
			else
			{
				pos--;
			}
		}
		return roman;
	}

	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("roman or arabic number: ");		
		String input = sc.nextLine();
		int inputInt;



		try
		{
			inputInt = Integer.parseInt(input);
			System.out.println(arabicToRoman(inputInt));
		}
		catch(RomanArabicException e)
		{
			System.out.println(e);
		}
		catch(Exception e)
		{
			try
			{
				System.out.println(romanToArabic(input));
			}
			catch(RomanArabicException ex)
			{
				System.out.println(ex);
			}
		}
	}
}
