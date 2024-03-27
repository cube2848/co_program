using System.Reflection.Metadata.Ecma335;

namespace AlgoTest;
using algo;
[TestClass]
public class UnitTest1
{
    private List<int> InputFile()
    {
        var list = new List<int>();
        var sr = new StreamReader("D:\\workspace\\document\\c\\co_program\\algo\\AlgoTest\\Input.txt");
        for (int i = 0; i<10; i++)
        {
            list.Add(int.Parse(sr.ReadLine()));
        }

        return list;
    }
    private List<int> OutputFile()
    {
        var list = new List<int>();
        var sr = new StreamReader("D:\\workspace\\document\\c\\co_program\\algo\\AlgoTest\\Output.txt");
        while (sr.Peek() >= 0)
        {
            list.Add(int.Parse(sr.ReadLine()));
        }
        sr.Close();
        return list;
    }
    [TestMethod]
    public void Test()
    {
        var i = InputFile();
        var o = OutputFile();
        if (Algo.Algorithm(i.ToArray()) != o[0])
        {
            Assert.Fail($"틀렸습니다. : {Algo.Algorithm(i.ToArray())}");
        }
        
    }
}