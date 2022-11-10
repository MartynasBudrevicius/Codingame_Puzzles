/*https://www.codingame.com/training/hard/the-greatest-number*/
using System;
using System.Collections.Generic;

class Solution{
    static void Main(string[] args){
        var N = int.Parse(Console.ReadLine());
        var input = Console.ReadLine().Split(" ");
        Array.Sort(input);
        bool dot = false;
        if(input[0] == "-"){
            if(input[input.Length-1] == "0")
                Console.Write(0);
            else{
                Console.Write("-");
                List<string> tmp = new List<string>(input);
                tmp.RemoveAt(0);
                input = tmp.ToArray();
                if(input[0] == "."){
                    dot = true;
                    tmp = new List<string>(input);
                    tmp.RemoveAt(0);
                    input = tmp.ToArray();
                }
                for(int x = 0; x < input.Length; x++){
                    Console.Write(input[x]);
                    if(x == 0 && dot)
                        Console.Write(".");
                }
            }
        }
        else{
            if(input[0] == "."){
                dot = true;
                List<string> tmp = new List<string>(input);
                tmp.RemoveAt(0);
                input = tmp.ToArray();
            }
            Array.Reverse(input);
            for(int x = 0; x < input.Length; x++){
                if(x == input.Length - 1 && dot){
                    if(input[x] == "0")
                        break;
                    else{
                        Console.Write(".");
                        Console.Write(input[x]);
                    }
                }
                else
                    Console.Write(input[x]);
            }
        }
    }
}
