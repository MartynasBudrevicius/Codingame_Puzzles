//https://www.codingame.com/training/medium/guessing-n-cheating
#include <bits/stdc++.h>

using namespace std;

int main(){
    int R;
    cin >> R;
    int nr = 1, xr = 100;
    for(int i = 1; i <= R; i++){
        int x;
        cin >> x;
        string line; getline(cin, line);
        if(line == " too high")
            xr = min(xr, x - 1);
        if(line == " too low")
            nr = max(nr, x + 1);
        if(nr > xr || ((x < nr || x > xr) && line == " right on")){
            cout << "Alice cheated in round " << i << endl;
            return 0;
        }
    }
    cout << "No evidence of cheating" << endl;
}
