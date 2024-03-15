namespace algo;

class Program
{
    static void Main(string[] args)
    {
        string words = System.Console.ReadLine();//문자열
        words = words.ToUpper();//대문자화
        char[] arr;
        arr = words.ToCharArray(0, words.Length);//문자 배열
        var query = (from n in arr orderby n select n).ToArray();
        Dictionary<char, int> kv = new Dictionary<char, int>();
        List<int> a = new List<int>();
        int stack = 0;
        char cur = query[0];
        foreach (var VARIABLE in query)
        {
            if (VARIABLE != cur)
            {
                kv.Add(cur,stack);
                a.Add(stack);
                stack = 1;
                cur = VARIABLE;
            }
            else
            {
                stack++;
            }
        }
        kv.Add(cur, stack);
        a.Add(stack);
        int max = a.Max();
        int same = 0;
        foreach (var VARIABLE in kv.Keys)
        {
            if (kv[VARIABLE] == max)
            {
                same++;
            }
        }

        if (same == 1)
        {
            foreach (var VARIABLE in kv.Keys)
            {
                if (kv[VARIABLE] == max)
                {
                    Console.WriteLine(VARIABLE);
                }
            }
        }
        else
        {
            Console.WriteLine("?");
        }
    }
}