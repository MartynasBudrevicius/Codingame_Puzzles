//https://www.codingame.com/training/medium/network-cabling
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N; cin.ignore();
    vector<long> ys;
    long minX = LONG_MAX, maxX = LONG_MIN;
    for(int i = 0; i < N; i++){
        long X, Y;
        cin >> X >> Y; cin.ignore();
        if (X > maxX)
            maxX = X;
        if (X < minX)
            minX = X;
        ys.push_back(Y);
    }
    nth_element(ys.begin(), ys.begin() + N/2, ys.end());
    long median = ys[N/2];
    long minL = accumulate(ys.begin(), ys.end(), maxX-minX, [median](long acc, long v) { return acc + abs(v-median);});
    cout << minL << endl;
}
