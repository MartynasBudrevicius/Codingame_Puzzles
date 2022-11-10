//https://www.codingame.com/training/medium/gravity
#include <bits/stdc++.h>

using namespace std;

int main(){
    int width, height;
    cin >> width >> height; cin.ignore();
    string Map[height];
    for(int i = 0; i < height; i++)
        getline(cin, Map[i]);
    for(int i = 0; i < height; i++){
        for(int y = height - 1; y >= 0; y--){
            for(int x = 0; x < width; x++){
                if(Map[y][x] == '#'){
                    if(y + 1 < height){
                        if(Map[y + 1][x] == '.'){
                            Map[y + 1][x] = '#';
                            Map[y][x] = '.';
                        }
                    }
                }
            }
        }
    }
    for(int i = 0; i < height; i++)
        cout << Map[i] << endl;
}
