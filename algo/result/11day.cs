//2851-supermario
//https://www.acmicpc.net/problem/2851

using System.ComponentModel;

namespace algo
{
    
    public class Algo
    {
        public static int count { get; set; }
        public static int[] Input()
        {
            int[] inp = new int[10];
            for (int i = 0; i<10; i++)
            {
                inp[i]=int.Parse(Console.ReadLine());
            }
            return inp;
        }

        public static int Algorithm(int[]value)
        {
            int sum=0;
            int prev=0;
            for (int i = 0; i<10; i++)
            {
                if (sum >= 100)
                {
                    if (Math.Abs(sum-100) <= Math.Abs(prev-100))
                    {
                        return sum;
                    }

                    return prev;
                }

                prev = sum;
                sum = sum+ value[i];
                 
            }

            if (Math.Abs(sum-100) <= Math.Abs(prev-100))
            {
                return sum;
            }

            return prev;
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
            Algo.Output(Algo.Algorithm(Algo.Input()));
        }
    }   
}