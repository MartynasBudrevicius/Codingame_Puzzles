//https://www.codingame.com/training/easy/ascii-art
#include <bits/stdc++.h>

using namespace std;

int n, m;

int main(){
    cin >> n >> m; cin.ignore();
    string text;
    getline(cin, text);
    for(int i = 0; i < m; i++){
        string temp;
        getline(cin, temp);
        for(int x = 0; x < text.size(); x++){
            int num = 26;
            if(isalpha(text[x])) num = toupper(text[x]) - 'A';
            string out = temp.substr(n * num, n);
            cout << out;
        }
        cout << endl;
    }
}
