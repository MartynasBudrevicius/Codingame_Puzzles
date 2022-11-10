//https://www.codingame.com/training/easy/temperatures
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, max = numeric_limits<int>::max();
    cin >> n; cin.ignore();
    for(int i = 0; i < n; i++){
        int t;
        cin >> t; cin.ignore();
        if(abs(t) < abs(max) || (abs(t) == abs(max) && t > max)){
            max = t;
        }
    }
    cout << max << endl;
}
