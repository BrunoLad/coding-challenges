using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

// https://hackerrank.com/challenges/crush/problem
class Result
{
    /*
     * Complete the 'arrayManipulation' function below.
     *
     * The function is expected to return a LONG_INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER n
     *  2. 2D_INTEGER_ARRAY queries
     */

    public static long arrayManipulation(int n, List<List<int>> queries)
    {
        var max = 0L;
        var aux = 0L;
        var manipulationList = new long[n + 1];
        int length = queries.Count;

        for (int i = 0; i < length; i++)
        {
            List<int> query = queries[i];
            manipulationList[query[0]] += query[2];

            if ((query[1] + 1) <= n)
                manipulationList[query[1] + 1] -= query[2];
        }

        for (int i = 1; i <= n; i++)
        {
            aux += manipulationList[i];
            if (max < aux)
                max = aux;
        }

        return max;
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(
            @System.Environment.GetEnvironmentVariable("OUTPUT_PATH"),
            true
        );

        string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');

        int n = Convert.ToInt32(firstMultipleInput[0]);

        int m = Convert.ToInt32(firstMultipleInput[1]);

        List<List<int>> queries = new List<List<int>>();

        for (int i = 0; i < m; i++)
        {
            queries.Add(
                Console
                    .ReadLine()
                    .TrimEnd()
                    .Split(' ')
                    .ToList()
                    .Select(queriesTemp => Convert.ToInt32(queriesTemp))
                    .ToList()
            );
        }

        long result = Result.arrayManipulation(n, queries);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
