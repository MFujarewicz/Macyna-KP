public class RomanArabicException extends Exception
{
	private String message = "Unknown Exception";

	public String getMessage()
	{
		return message;
	}

	public RomanArabicException(String roman)
	{
		message = roman + " is not a roman number";
	}

	public RomanArabicException(int arabic)
	{
		if (arabic>3999 || arabic<1)
		{
			message = arabic + " is out of range (1 - 3999)";
		}
	}
}