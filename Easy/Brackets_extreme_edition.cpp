//https://www.codingame.com/training/easy/brackets-extreme-edition
#include <bits/stdc++.h>

using namespace std;

int main(){
    string symbols;
    cin >> symbols; cin.ignore();
    int num[3] = {0, 0, 0};
    for(int i = 0; i < symbols.length(); i++){
        if(symbols[i] == '(')
            num[0]++;
        if(symbols[i] == ')')
            num[0]--;
        if(symbols[i] == '[')
            num[1]++;
        if(symbols[i] == ']')
            num[1]--;
        if(symbols[i] == '{')
            num[2]++;
        if(symbols[i] == '}') 
            num[2]--;
        if(min(num[0], min(num[1], num[2])) < 0)
            break;
    }
    if(num[0] + num[1] + num[2] == 0){
        cout << "true" << endl;
        return 0;
    }
    cout << "false" << endl;
}
