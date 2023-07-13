using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

// https://www.hackerrank.com/challenges/simple-array-sum/problem
class Solution
{
    /*
     * Complete the simpleArraySum function below.
     */
    static int simpleArraySum(int[] ar)
    {
        int sum = 0;
        for (int i = 0; i < ar.Length; i++)
        {
            sum += ar[i];
        }
        return sum;

        // Using LINQ
        // int sum =
        //     (from val in ar
        //     select val).Sum();

        // return sum;
    }

    static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(
            @System.Environment.GetEnvironmentVariable("OUTPUT_PATH"),
            true
        );

        int arCount = Convert.ToInt32(Console.ReadLine());

        int[] ar = Array.ConvertAll(
            Console.ReadLine().Split(' '),
            arTemp => Convert.ToInt32(arTemp)
        );
        int result = simpleArraySum(ar);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
