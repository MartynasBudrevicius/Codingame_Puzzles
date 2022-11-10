//https://www.codingame.com/training/easy/ghost-legs
#include <bits/stdc++.h>

using namespace std;

int main(){
    int w, h;
    cin >> w >> h;
    cin.ignore();
    vector<string> map(h);
    for(string& s : map)
        getline(cin, s);
    for(int k = 0; k < w; k += 3){
        int j = k;
        cout << map[0][j];
        for(int i = 0; i < h - 1; i++){
            if(j > 2 && map[i][j - 1] == '-')
                j -= 3;
            else if(j < w - 3 && map[i][j + 1] == '-')
                j += 3;
        }
        cout << map[h - 1][j] << endl;
    }
}
