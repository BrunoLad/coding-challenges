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

// https://www.hackerrank.com/challenges/compare-the-triplets/problem
class Solution
{
    // Complete the compareTriplets function below.
    static List<int> compareTriplets(List<int> a, List<int> b)
    {
        List<int> val = new List<int>(2);
        val.Add(0);
        val.Add(0);

        var multipleScores = a.Zip(b, (n, w) => new { Alice = n, Bob = w });

        foreach (var score in multipleScores)
        {
            if (score.Alice > score.Bob)
            {
                val[0]++;
            }
            else if (score.Alice < score.Bob)
            {
                val[1]++;
            }
        }

        return val;
    }

    static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(
            @System.Environment.GetEnvironmentVariable("OUTPUT_PATH"),
            true
        );

        List<int> a = Console
            .ReadLine()
            .TrimEnd()
            .Split(' ')
            .ToList()
            .Select(aTemp => Convert.ToInt32(aTemp))
            .ToList();

        List<int> b = Console
            .ReadLine()
            .TrimEnd()
            .Split(' ')
            .ToList()
            .Select(bTemp => Convert.ToInt32(bTemp))
            .ToList();

        List<int> result = compareTriplets(a, b);

        textWriter.WriteLine(String.Join(" ", result));

        textWriter.Flush();
        textWriter.Close();
    }
}
