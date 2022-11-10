//https://www.codingame.com/training/easy/encryptiondecryption-of-enigma-machine
#include <bits/stdc++.h>

using namespace std;

int main(){
    string Op, msg;
    getline(cin, Op);
    int N;
    cin >> N; cin.ignore();
    vector<string> rotors(3);
    for(int i = 0; i < 3; ++i)
        getline(cin, rotors[i]);
    getline(cin, msg);
    if(Op == "ENCODE"){
        for(auto& c : msg){
            c = (c - 'A' + N++) % 26 + 'A';
            for (const auto& r : rotors)
                c = r[c - 'A'];
        }
    }
    else{
        N %= 26;
        for(auto& c : msg){
            for (auto it = rotors.rbegin(); it != rotors.rend(); ++it)
                c = 'A' + it->find(c);
            c = (c - 'A' + 26 - N) % 26 + 'A';
            ++N %= 26;
        }
    }
    cout << msg;
}
