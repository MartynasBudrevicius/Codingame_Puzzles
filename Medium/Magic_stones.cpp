//https://www.codingame.com/training/medium/magic-stones
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, s;
    map<int, int> stones;
    for(cin >> N; N-- && cin >> s;){
        for(stones[s]++; stones[s] > 1; stones[++s]++)
            stones.erase(s);
    }
    cout << stones.size() << endl;
}
