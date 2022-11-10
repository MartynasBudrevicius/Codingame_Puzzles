//https://www.codingame.com/training/easy/1d-bush-fire
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++){
        int ans = 0;
        string line;
        getline(cin, line);
        for(int x = 0; x < line.size(); x++){
            if(line[x] == 'f'){
                ans++;
                x += 2;
            }
        }
        cout << ans << endl;
    }
}
