//https://www.codingame.com/training/medium/scrabble
#include <bits/stdc++.h>

using namespace std;

bool arrange(string word, string letters){
    for(int i = 0; i < word.length(); i++){
        int pos = letters.find(word[i]);
        if(pos != -1)
            letters[pos] = ' ';
        else
            return false;
    }
    return true;
}

int main()
{
    map<char, int> value = {{'a',1}, {'b',3}, {'c',3}, {'d',2}, {'e',1}, {'f',4}, {'g',2}, {'h',4}, {'i',1}, {'j',8}, {'k',5}, {'l',1}, {'m',3}, {'n',1}, {'o',1}, {'p',3}, {'q',10}, {'r',1}, {'s',1}, {'t',1}, {'u',1}, {'v',4}, {'w',4}, {'x',8}, {'y',4}, {'z',10}};
    int N; cin >> N; cin.ignore();
    int values[N];
    string words[N];
    for(int i = 0; i < N; i++){
        string W; getline(cin, W);
        words[i] = W;
        values[i] = 0;
        for(int l = 0; l < W.length(); l++)
            values[i] += value[W[l]];
    }
    string LETTERS; getline(cin, LETTERS);
    int bestValue = 0;
    string bestWord = "";
    for(int i = 0; i < N; i++){
        if(arrange(words[i], LETTERS)){
            if(values[i] > bestValue){
                bestValue = values[i];
                bestWord = words[i];
            }
        }
    }
    cout << bestWord << endl;
}
