using System.ComponentModel;

namespace algo
{
    
    public class Algo
    {
        public static int count { get; set; }
        public static int Input()
        {
            return int.Parse(Console.ReadLine());
        }

        public static int Algorithm(int value)
        {
            if (value == 0)
            {
                return 0;
            }
            else if (value == 1)
            {
                return 1;
            }
            int Fn(int N, int prev, int sum)
            {
                count++;
                if (N == 0)
                {
                    return sum;
                }

                return Fn(N - 1, sum, sum + prev);
            }

            return Fn(value -1, 0, 1);
        }

        public static void Output(int input)
        {
            Console.WriteLine(input);
        }
    }
     
    class Program
    {
        static void Main(string[] args)
        {
            Algo.count = 0;
            Algo.Output(Algo.Algorithm(Algo.Input()));
            Console.WriteLine($"알고리즘 함수 실행 횟수 : {Algo.count}");
        }
    }   
}