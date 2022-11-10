//https://www.codingame.com/training/easy/the-travelling-salesman-problem
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N; cin.ignore();
    int mx, my, X[N + 1], Y[N + 1], good[N + 1];
    double distance = 0, best;
    int bestid, ans;
    cin >> mx >> my; cin.ignore();
    for (int i = 0; i < N; i++)
        good[i] = 0;
    good[0] = 1;
    X[0] = mx;
    Y[0] = my;
    for (int i = 1; i < N; i++)
        cin >> X[i] >> Y[i]; cin.ignore();
    for (int z = 0; z < N - 1; z++){
        best = 999999;
        for (int i = 0; i < N; i++){
            if(sqrt((mx - X[i])*(mx - X[i]) + (my - Y[i])*(my - Y[i])) < best && good[i] == 0){
                best = sqrt((mx - X[i])*(mx - X[i]) + (my - Y[i])*(my - Y[i]));
                bestid = i;
            }
        }
        distance += best;
        mx = X[bestid];
        my = Y[bestid];
        good[bestid] = 1;
    }
    distance += sqrt((mx - X[0])*(mx - X[0]) + (my - Y[0])*(my - Y[0]));
    ans = distance;
    if(ans + 0.49 < distance)
        ans++;
    cout << ans;
}
