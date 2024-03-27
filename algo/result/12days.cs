//3449-hamming distance
//https://www.acmicpc.net/problem/3449
using System.ComponentModel;

namespace algo
{
    
    public class Algo
    {
        public static List<char[]> Input()
        {
            int N = int.Parse(Console.ReadLine());
            var l = new List<char[]>();
            for (int i = 0; i<N*2; i++)
            {
                string temp = Console.ReadLine();
                var a = new char[temp.Length];
                for (int j = 0; j<temp.Length; j++)
                {
                    a[j] = temp[j];
                }
                l.Add(a);
            }

            return l;

        }

        public static void Algorithm(List<char[]>value)
        {
            int ham = 0;
            for (int i = 0; i<value.Count; i = i+2)
            {
                ham = 0;
                for (int j = 0; j<value[i].Length; j++)
                {
                    if (value[i][j] != value[i + 1][j])
                    {
                        ham++;
                    }
                }

                Console.WriteLine($"Hamming distance is {ham}.");
            }
        }
        //
        //     if (Math.Abs(sum-100) <= Math.Abs(prev-100))
        //     {
        //         return sum;
        //     }
        //
        //     return prev;
        // }
        //
        // public static void Output(int input)
        // {
        //     Console.WriteLine(input);
        // }
    }
     
    class Program
    {
        static void Main(string[] args)
        {
            Algo.Algorithm(Algo.Input());
        }
    }   
}