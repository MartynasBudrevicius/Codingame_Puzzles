//https://www.codingame.com/training/medium/a-coin-guessing-game
#include <bits/stdc++.h>

using namespace std;

bool sorting(pair<int, set<int>> a, pair<int, set <int>> b){
    return b.second.size() > a.second.size();
}

int main(){
    int n, t;
    cin >> n >> t; cin.ignore();
    pair<int, set<int>> C[n];
    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            C[x].second.insert(y * 2 + 2);
            C[x].first = x;
        }
    }
    for(int i = 0; i < t; i++){
        vector <int> L1, L2;
        for (int j = 0; j < n; j++){
            int c;
            cin >> c; cin.ignore();
            if(c % 2 == 0) L2.push_back(c);
            else L1.push_back(c);
        }
        for(int x = 0; x < L1.size(); x++){
            for(int y = 0; y < L2.size(); y++){
                if(C[L1[x]/2].second.find(L2[y]) != C[L1[x]/2].second.end()){
                    C[L1[x]/2].second.erase(L2[y]);
                }
            }
        }
    }
    sort(C, C+n, sorting);
    int ans[n];
    for(int x = 0; x < n; x++){
        ans[C[x].first] = *(C[x].second.begin());
        for(int y = x + 1; y < n; y++){
            if(C[y].second.find(ans[C[x].first]) != C[y].second.end()){
                C[y].second.erase(ans[C[x].first]);
            }
        }
    }
    for(int x = 0; x < n-1; x++){
        cout << ans[x] << " ";
    }
    cout << ans[n-1];
}
