namespace algo;

class Program
{
    static void Main(string[] args)
    {
        int N =int.Parse(System.Console.ReadLine());
        string[] str = new string[N];
        int sum = 0;
        int stack = 1;
        for (int i = 0; i<N; i++)
        {
            str[i] = System.Console.ReadLine();
        }

        for (int j = 0; j < N; j++)
        {
            sum = 0;
            stack = 1;
            foreach (var VARIABLE in str[j])
            {
                if (VARIABLE == 'O')
                {
                    sum = sum + stack;
                    stack++;
                }
                else
                {
                    stack = 1;
                }
            }
            Console.WriteLine(sum);
        }
    }
}