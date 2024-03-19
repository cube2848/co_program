using System.Reflection.Metadata.Ecma335;

namespace AlgoTest;
using algo;
[TestClass]
public class UnitTest1
{
    private List<Algo.inputs> InputFile()
    {
        var list = new List<Algo.inputs>();
        var sr = new StreamReader("D:\\workspace\\document\\c\\co_program\\algo\\AlgoTest\\Input.txt");
        int N = int.Parse(sr.ReadLine());
        for (int i = 0; i<N; i++)
        {
            string temp = sr.ReadLine();
            var variable = temp.Split(' ');
            var strv = new Algo.inputs();
            strv.value = double.Parse(variable[0]);
            strv.unit = variable[1];
            list.Add(strv);
        }

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
        var i = InputFile();
        var o = OutputFile();
        for (int j = 0; j<o.Count; j++)
        {
            var algores = Algo.Algorithm(i[j].unit, i[j].value);
            var result = algores.value.ToString("F4") + " " + algores.unit;
            if (result != o[j])
            {
                Assert.Fail("틀렸습니다.");
            }
        }
        
    }
}