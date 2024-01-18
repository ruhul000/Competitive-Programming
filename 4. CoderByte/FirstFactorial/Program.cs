using System;

class MainClass
{

    public static int FirstFactorial(int num)
    {
        int reuslt = 1;
        if (num == 1)
        {
            return 1;
        }
        else
        {
            reuslt = num * FirstFactorial(num - 1);
        }
        return reuslt;
    }

    static void Main()
    {

        // keep this function call here
        Console.WriteLine(FirstFactorial(Convert.ToInt32(Console.ReadLine())));

    }

}