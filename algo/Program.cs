namespace algo;

class Program
{
    static void Main(string[] args)
    {
        var nums = Input();
        foreach (var VARIABLE in nums)
        {
            bool ret = Algorithm(VARIABLE);
            Output(ret);
        }
    }
    private static List<string> Input()
    {
        List<string> nums = new List<string>();
        string temp;
        while (true)
        {
            temp = Console.ReadLine();
            if (temp == "0")
            {
                break;
            }
            nums.Add(temp);
        }

        return nums;
    }
    private static bool Algorithm(string str)
    {
        int last = str.Length;
        for (int i = 0; i<str.Length; )
        {
            if (i==last)
            {
                return true;
            }else if(str[i]!=str[last-1])
            {
                return false;
            }

            i++;
            last--;
        }
        return true;
    }
    private static void Output(bool ret)
    {
        if (ret == true)
        {
            Console.WriteLine("yes");
        }
        else
        {
            Console.WriteLine("no");
        }
    }
}