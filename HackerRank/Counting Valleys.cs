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

// https://www.hackerrank.com/challenges/counting-valleys/problem
class Result
{
    /*
     * Complete the 'countingValleys' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER steps
     *  2. STRING path
     */

    public static int countingValleys(int steps, string path)
    {
        var totalValleys = 0;
        var altitude = 0;
        var previousAltitude = 0;

        for (int i = 0; i < path.Length; i++)
        {
            previousAltitude = altitude;

            if (path[i] == 'D')
                altitude--;
            else
                altitude++;

            if (previousAltitude == 0 && altitude < 0)
                totalValleys++;
        }

        return totalValleys;
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

        int steps = Convert.ToInt32(Console.ReadLine().Trim());

        string path = Console.ReadLine();

        int result = Result.countingValleys(steps, path);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
