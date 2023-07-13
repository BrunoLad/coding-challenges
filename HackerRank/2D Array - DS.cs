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

// https://www.hackerrank.com/challenges/2d-array/problem
class Result
{
    /*
     * Complete the 'hourglassSum' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY arr as parameter.
     */

    public static int hourglassSum(List<List<int>> arr)
    {
        int firstRow = arr[0][0] + arr[0][1] + arr[0][2];
        int secondRow = arr[1][1];
        int thirdRow = arr[2][0] + arr[2][1] + arr[2][2];
        var maxHourglass = firstRow + secondRow + thirdRow;

        for (int i = 0; i < arr.Count - 2; i++)
        {
            for (int j = 0; j < arr[i].Count - 2; j++)
            {
                firstRow = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
                secondRow = arr[i + 1][j + 1];
                thirdRow = arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                int hourglass = firstRow + secondRow + thirdRow;

                if (hourglass > maxHourglass)
                    maxHourglass = hourglass;
            }
        }

        return maxHourglass;
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

        List<List<int>> arr = new List<List<int>>();

        for (int i = 0; i < 6; i++)
        {
            arr.Add(
                Console
                    .ReadLine()
                    .TrimEnd()
                    .Split(' ')
                    .ToList()
                    .Select(arrTemp => Convert.ToInt32(arrTemp))
                    .ToList()
            );
        }

        int result = Result.hourglassSum(arr);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
