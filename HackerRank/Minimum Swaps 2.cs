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

// https://www.hackerrank.com/challenges/minimum-swaps-2/problem
class Solution
{
    // Complete the minimumSwaps function below.
    static int minimumSwaps(int[] arr)
    {
        int total = 0;

        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[i] == (i + 1))
                continue;

            swap(ref arr[i], ref arr[arr[i] - 1]);
            total++;
            i--;
        }

        return total;
    }

    static void swap(ref int first, ref int second)
    {
        int temp = first;
        first = second;
        second = temp;
    }

    static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(
            @System.Environment.GetEnvironmentVariable("OUTPUT_PATH"),
            true
        );

        int n = Convert.ToInt32(Console.ReadLine());

        int[] arr = Array.ConvertAll(
            Console.ReadLine().Split(' '),
            arrTemp => Convert.ToInt32(arrTemp)
        );
        int res = minimumSwaps(arr);

        textWriter.WriteLine(res);

        textWriter.Flush();
        textWriter.Close();
    }
}
