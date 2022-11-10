//https://www.codingame.com/training/easy/rectangle-partition
#include <bits/stdc++.h>

using namespace std;

int Xs[20001];
int Ys[20001];

int main(){
    int w, h, countX, countY;
    cin >> w >> h >> countX >> countY;
    int X[countX + 3], Y[countY + 3];
    for(int x = 0; x <= 20000; x++){
        Xs[x] = 0;
        Ys[x] = 0;
    }
    X[0] = 0; Y[0] = 0;
    X[countX + 1] = w; Y[countY + 1] = h;
    for(int i = 1; i <= countX; i++)
        cin >> X[i];
    for (int i = 1; i <= countY; i++)
        cin >> Y[i];
    int ans = 0;
    for(int x1 = 0; x1 < countX + 2; x1++){
        for(int x2 = x1 + 1; x2 < countX + 2; x2++){
            Xs[X[x2] - X[x1]]++;
        }
    }
    for(int x1 = 0; x1 < countY + 2; x1++){
        for(int x2 = x1 + 1; x2 < countY + 2; x2++){
            Ys[Y[x2] - Y[x1]]++;
        }
    }
    for(int x = 0; x <= 20000; x++)
        ans += Xs[x] * Ys[x];
    cout << ans;
}
