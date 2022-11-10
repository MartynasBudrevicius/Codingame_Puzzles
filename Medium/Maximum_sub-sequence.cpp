//https://www.codingame.com/training/medium/maximum-sub-sequence
#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, e{}, len{};
    map<int, int> h;
    
    while(cin >> i){
        if(h[i] = 1 + h[i-1]; h[i] > len || (h[i] == len && i < e))
            len = h[e = i];
    }
    for(i = e - len + 1; i < e; ++i)
        cout << i << " "; 
    cout << e;
}
