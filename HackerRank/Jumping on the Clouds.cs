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

// https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
class Result
{
    /*
     * Complete the 'jumpingOnClouds' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY c as parameter.
     */

    public static int jumpingOnClouds(List<int> c)
    {
        var jumps = 0;

        for (int i = 0; i < c.Count - 1; )
        {
            if (i + 2 < c.Count && c[i + 2] != 1)
                i += 2;
            else
                i++;

            jumps++;
        }

        return jumps;
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

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> c = Console
            .ReadLine()
            .TrimEnd()
            .Split(' ')
            .ToList()
            .Select(cTemp => Convert.ToInt32(cTemp))
            .ToList();

        int result = Result.jumpingOnClouds(c);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
