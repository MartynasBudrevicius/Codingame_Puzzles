//https://www.codingame.com/training/medium/conway-sequence
#include <bits/stdc++.h>

using namespace std;

int main(){
    int R, L;
    cin >> R >> L; 
    vector <int> S[L + 1];
    S[0].push_back(R);
    if(L == 1)
        cout << R;
    for(int x = 1; x < L; x++){
        int last = -1, amount = 0;
        for(int i = 0; i < S[x - 1].size(); i++){
            if(S[x - 1][i] == last)
                amount++;
            else{
                if(last != -1){
                    if(x + 1 == L)
                        cout << amount << " " << last << " ";
                    else{
                        S[x].push_back(amount);
                        S[x].push_back(last);
                    }
                }
                last = S[x - 1][i];
                amount = 1;
            }
        }
        if(x + 1 == L)
            cout << amount << " " << last;
        S[x].push_back(amount);
        S[x].push_back(last);
    }
}
