//https://www.codingame.com/training/easy/create-the-longest-sequence-of-1s
#include <bits/stdc++.h>

using namespace std;

int main(){
    string b;
    getline(cin, b);
    int ans = 1, now = 0, last = 0;
    for(int x = 0; x < b.size(); x++){
        if(b[x] == '1')
            now++;
        else{
            last = now;
            now = 0;
        }
        ans = max(ans, now + last + 1);
    }
    cout << ans;
}
