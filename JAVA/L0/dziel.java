public class dziel
{
    public static void main(String[] args)
    {
        int a;
        boolean isNumber;

        for (int i=0; i<args.length; i++)
        {
            try
            {
                a = Integer.parseInt(args[i]);
                isNumber = true;
            }
            catch (NumberFormatException ex)
            {
                System.out.println(args[i] + " nie jest calkowita liczba");
                isNumber = false;
            }
            if (isNumber == true)
            {
                System.out.println(div(Integer.parseInt(args[i])));
            }

        }
    }

    public static int NWD(int a, int b)
    {
        int c;

        while(a != 0)
        {
            c = a;
            a = b%a;
            b = c;

        }

        return b;
    }

    public static int div(int n)
    {


        if (n<0)
        {
            n=n*-1;
        }

        if (n==0)
        {
            return 0;
        }

        int i = n-1;
        int dzielnik = 1;

        while (i>1)
        {
            if (n%i == 0)
            {
                dzielnik = dzielnik * i;
                n = n/i;
                i=n-1;
            }
            i--;
        }
        return dzielnik;




    }
}