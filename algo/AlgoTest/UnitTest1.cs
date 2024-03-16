using System.Reflection.Metadata.Ecma335;

namespace AlgoTest;
using algo;
[TestClass]
public class UnitTest1
{
    private List<string> InputFile()
    {
        var list = new List<string>();
        var sr = new StreamReader("D:\\workspace\\document\\c\\co_program\\algo\\AlgoTest\\Input.txt");
        while (sr.Peek() >= 0)
        {
            list.Add(sr.ReadLine());
        }
        sr.Close();
        return list;
    }
    private List<string> OutputFile()
    {
        var list = new List<string>();
        var sr = new StreamReader("D:\\workspace\\document\\c\\co_program\\algo\\AlgoTest\\Output.txt");
        while (sr.Peek() >= 0)
        {
            list.Add(sr.ReadLine());
        }
        sr.Close();
        return list;
    }
    [TestMethod]
    public void Test()
    {
        var l = InputFile();
        var o = OutputFile();
        string str = " ";
        for (int i = 0; i<l.Count; i++)
        {
            if (l[i] == "0")
            {
                break;
            }
            if (Algo.Algorithm(l[i]))
            {
                str = "yes";
            }
            else
            {
                str = "no";
            }

            if (str != o[i])
            {
                Assert.Fail("틀렸습니다.");
            }
        }
    }
}