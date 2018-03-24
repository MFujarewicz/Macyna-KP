public class Dzielniki
{
    public  static void main(String[] args)
    {
        System.out.println(NWD(args[0], args[1]));
    }

    public static int div(int n)
    {
        return 40;
    }

    public static int NWD(String s1, String s2)
    {
        int a = Integer.parseInt(s1);
        int b = Integer.parseInt(s2);
        int c;

        while (b != 0)
        {
            c = b;
            b = a%b;
            a = c;
        }
        return a;

    }
}