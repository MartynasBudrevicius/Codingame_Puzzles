//https://www.codingame.com/training/medium/there-is-no-spoon-episode-1
#include <bits/stdc++.h>

using namespace std;

int width, height;

vector <string> Map;

int main(){
    cin >> width >> height; cin.ignore();
    Map.resize(height);
    for(int i = 0; i < height; i++) getline(cin, Map[i]);
    for(int i = 0; i < height; i++){
        for(int x = 0; x < width; x++){
            if(Map[i][x] == '0'){
                cout << x << " " << i << " ";
                bool found = false;
                for(int z = x + 1; z < width && !found; z++){
                    if(Map[i][z] == '0'){
                        cout << z << " " << i << " ";
                        found = true;
                    }
                }
                if(!found) cout << -1 << " " << -1 << " ";
                found = false;
                for(int z = i + 1; z < height && !found; z++){
                    if(Map[z][x] == '0'){
                        cout << x << " " << z << endl;
                        found = true;
                    }
                }
                if(!found) cout << -1 << " " << -1 << endl;
            }
        }
    }
}
