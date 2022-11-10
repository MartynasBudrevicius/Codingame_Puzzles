//https://www.codingame.com/training/medium/minimal-number-of-swaps
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n; cin.ignore();
    int x[n], ats = 0, vien = 0;
    for(int i = 0; i < n; i++){
        cin >> x[i]; cin.ignore();
        if(x[i] == 1)
            vien++;
    }
    for(int i = 0; i < vien; i++){
        if(x[i] == 0)
            ats++;
    }
    cout << ats;
}
