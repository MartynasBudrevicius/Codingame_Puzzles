//https://www.codingame.com/training/easy/brick-in-the-wall
#include <bits/stdc++.h>

using namespace std;


int main(){
    int X, N;
    cin >> X >> N;
    int m[N];
    for(int i = 0; i < N; i++){
        cin >> m[i];
    }
    sort(m, m + N);
    double w = 0;
    for(int x = N - 1; x >= 0; x--){
        w += (N - x - 1) / X * 6.5 / 100.0 * 10.0 * m[x];
    }
    cout << fixed << setprecision(3) << w << endl;
}
