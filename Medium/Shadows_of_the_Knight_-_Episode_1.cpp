//https://www.codingame.com/training/medium/shadows-of-the-knight-episode-1
#include <bits/stdc++.h>

using namespace std;

int main(){
    int W, H;
    cin >> W >> H; cin.ignore();
    int N;
    cin >> N; cin.ignore();
    int X0, Y0;
    cin >> X0 >> Y0; cin.ignore();
    int minX = 0, minY = 0;
    int maxX = W - 1, maxY = H - 1;
    while(1){
        string BOMB_DIR;
        cin >> BOMB_DIR; cin.ignore();
        if (BOMB_DIR.find('U') != string::npos) maxY = Y0-1;
        if (BOMB_DIR.find('D') != string::npos) minY = Y0+1;
        if (BOMB_DIR.find('L') != string::npos) maxX = X0-1;
        if (BOMB_DIR.find('R') != string::npos) minX = X0+1;
        X0 = (maxX+minX) / 2;
        Y0 = (maxY+minY) / 2;
        cout << X0 << " " << Y0 << endl;
    }
}
