//https://www.codingame.com/training/medium/stock-exchange-losses
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, v; 
    cin >> n >> v;
    int maxim = v, minim = v, ats = 0;
    for(int i = 1; i < n; i++){
        cin >> v;
        minim = min(minim, v);
        ats = min(ats, minim - maxim);
        if(v > maxim){
            maxim = max(maxim, v);
            minim = v;
        }
    }
    cout << ats;
}
