//https://www.codingame.com/training/easy/pirates-treasure
#include <bits/stdc++.h>

using namespace std;

int main(){
    int w, h;
    cin >> w >> h;
    vector <vector<int>> v(h, vector<int>(w));
    for(int i = 0; i < h; ++i){
        for (int j = 0; j < w; ++j) {cin >> v[i][j];}
    }
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            if (v[i][j])
                continue;
            bool isTreausure = true;
            for(int a = max(0, i - 1); a < min(h, i + 2); ++a){
                for(int b = max(0, j - 1); b < min(w, j + 2); ++b){
                    if (a == i && b == j)
                        continue;
                    if (!v[a][b])
                        isTreausure = false;
                }
            }
            if(isTreausure){
                cout << j << ' ' << i << '\n';
                return 0;
            }
        }
    }
}
