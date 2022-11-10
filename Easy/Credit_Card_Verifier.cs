/*https://www.codingame.com/training/easy/credit-card-verifier-luhns-algorithm*/
using System;
using System.Linq;

class Solution{
    static void Main(string[] args){
        int n = int.Parse(Console.ReadLine());
        for (int i = 0; i < n; i++){
            string card = Console.ReadLine();
            card = String.Concat(card.Where(c => !Char.IsWhiteSpace(c)));
            int ans = 0;
            for(int x = 0; x < card.Length; x++){
                int cur = card[x] - '0';
                if(x % 2 == 0){
                    cur *= 2;
                    if(cur > 9)
                        cur -= 9;
                }
                ans += cur;
            }
            if(ans % 10 == 0){
                Console.WriteLine("YES");
            }
            else{
                Console.WriteLine("NO");
            }
        }
    }
}
