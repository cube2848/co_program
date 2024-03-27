//2712-American Style
//https://www.acmicpc.net/problem/2712

using System.ComponentModel;

namespace algo
{
     public class Algo
     {
         public struct inputs
         {
             public double value;
             public string unit;
         }
         public static List<inputs> Input()
         {
             int N = int.Parse(System.Console.ReadLine());
             string temp;
             var list = new List<inputs>();
             for (int i = 0; i<N; i++)
             {
                 temp = Console.ReadLine();
                 var variable = temp.Split(' ');
                 inputs strv = new inputs();
                 strv.value = double.Parse(variable[0]);
                 strv.unit = variable[1];
                 list.Add(strv);
             }

             return list;
         }

         public static inputs Algorithm(string unit, double value)
         {
             var result = new inputs();
             switch (unit)
             {
                 case "kg":
                 {
                     value = value * 2.2046;
                     result.value = value;
                     result.unit = "lb";
                     break;
                 }
                 case "lb":
                 {
                     value = value * 0.4536;
                     result.value = value;
                     result.unit = "kg";
                     break;
                 }
                 case "l":
                 {
                     value = value * 0.2642;
                     result.value = value;
                     result.unit = "g";
                     break;
                 }
                 case "g":
                 {
                     value = value * 3.7854;
                     result.value = value;
                     result.unit = "l";
                     break;
                 }
                 default:
                     break;
             }

             return result;
         }

         public static void Output(inputs input)
         {
             Console.WriteLine($"{input.value.ToString("F4")} {input.unit}");
         }
     }
     
     class Program
     {
         static void Main(string[] args)
         {
             var a = Algo.Input();
             foreach (var VARIABLE in a)
             {
                 Algo.Output(Algo.Algorithm(VARIABLE.unit,VARIABLE.value));
             }
         }
     }   
}