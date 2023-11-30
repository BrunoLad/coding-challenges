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

// https://www.hackerrank.com/challenges/ctci-ransom-note/problem
class Result
{
    /*
     * Complete the 'checkMagazine' function below.
     *
     * The function accepts following parameters:
     *  1. STRING_ARRAY magazine
     *  2. STRING_ARRAY note
     */

    public static bool checkMagazine(List<string> magazine, List<string> note)
    {
        magazine.Sort();
        note.Sort();

        for (int i = 0; i < note.Count; i++)
        {
            if (!magazine.Remove(note[i]))
                return false;
        }

        return true;

        // var groupedMagazine = magazine.GroupBy(x => x);
        // var hashtable = new Hashtable();

        // foreach (var entry in groupedMagazine)
        // {
        //     hashtable.Add(entry.Key, entry.Count());
        // }

        // for (int i = 0; i < note.Count; i++)
        // {
        //     if (!hashtable.ContainsKey(note[i]) || (int)hashtable[note[i]] <= 0)
        //         return false;
        //     else
        //     {
        //         var value = (int)hashtable[note[i]];
        //         hashtable[note[i]] = --value;
        //     }
        // }

        // return true;

        // var hashSet = magazine.ToHashSet();
        // int i = 0;

        // for(i = 0; i < note.Count; i++)
        // {
        //     var word = note[i];

        //     if(hashSet.Contains(note[i]))
        //     {
        //         hashSet.Remove(word);
        //     }
        //     else
        //     {
        //         Console.WriteLine("No");
        //         break;
        //     }

        // }

        // if (i == note.Count)
        //     Console.WriteLine("Yes");
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');

        int m = Convert.ToInt32(firstMultipleInput[0]);

        int n = Convert.ToInt32(firstMultipleInput[1]);

        List<string> magazine = Console.ReadLine().TrimEnd().Split(' ').ToList();

        List<string> note = Console.ReadLine().TrimEnd().Split(' ').ToList();

        var result = Result.checkMagazine(magazine, note);

        if (result)
            Console.WriteLine("Yes");
        else
            Console.WriteLine("No");
    }
}
