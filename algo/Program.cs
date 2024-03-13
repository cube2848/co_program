﻿using System.Text;

namespace algo;

class Program
{
    static void Main(string[] args)
    {
        int num = int.Parse(System.Console.ReadLine());
        string str;
        List<List<int>> lists = new List<List<int>>();
        for (int i = 0; i < num; i++)
        {
            str = System.Console.ReadLine();
            string[] words = str.Split(' ');
            var l = new List<int>();
            foreach (var VARIABLE in words)
            {
                l.Add(int.Parse(VARIABLE));
            }
            lists.Add(l);
        }

        int[] count = new int [num];
        List<int> exist = new List<int>();
        for (int i = 0; i<num; i++)
        {
            for (int j = i+1; j<5; j++)
            {
                for (int k = 0; k<num; k++)
                {
                    if (i == k)
                    {
                        continue;
                    }
                        
                    if (exist.Contains(k))
                    {
                        continue;
                    }
                    if (lists[i][j] == lists[k][j])
                    {
                        count[i]++;
                        exist.Add(k);
                    }
                }
            }
            exist.Clear();
        }

        int res = 0;
        int max = count[0];
        for (int k = 1; k < num; k++)
        {
            if (count[k] > max)
            {
                max = count[k];
                res = k;
            }
        }

        Console.WriteLine(res+1);
    }
}