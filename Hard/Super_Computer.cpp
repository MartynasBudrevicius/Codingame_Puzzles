//https://www.codingame.com/training/hard/super-computer
#include <bits/stdc++.h>

using namespace std;

bool insaneSorting(pair<int, int> a, pair <int, int> b){
    return a.second < b.second;
}

int main(){
    int N, ans = 1, last;
    cin >> N; cin.ignore();
    cerr << N << endl;
    vector <pair<int, int> > LETSGO;
    for(int i = 0; i < N; i++){
        int J, D;
        cin >> J >> D; cin.ignore();
        LETSGO.push_back({J, J + D - 1});
    }
    sort(LETSGO.begin(), LETSGO.end(), insaneSorting);
    last = LETSGO[0].second;
    for(int x = 1; x < LETSGO.size(); x++){
        if(LETSGO[x].first > last){
            last = LETSGO[x].second;
            ans++;
        }
    }
    cout << ans << endl;
}
