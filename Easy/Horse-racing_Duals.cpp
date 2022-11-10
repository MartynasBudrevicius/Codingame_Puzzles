//https://www.codingame.com/training/easy/horse-racing-duals
#include <bits/stdc++.h>

using namespace std;

int N, maximum = numeric_limits<int>::max();

vector <int> H;

int main(){
    cin >> N; cin.ignore();
    H.resize(N);
    for(int i = 0; i < N; i++){
        cin >> H[i]; cin.ignore();
    }
    sort(H.begin(), H.end());
    for(int i = 0; i < N - 1; i++){
        if(H[i + 1] - H[i] < maximum) maximum = H[i + 1] - H[i];
    }
    cout << maximum << endl;
}
