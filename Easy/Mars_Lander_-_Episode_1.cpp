//https://www.codingame.com/training/easy/mars-lander-episode-1
#include <bits/stdc++.h>

using namespace std;

int main(){
    int surfaceN, temp;
    cin >> surfaceN; cin.ignore();
    for(int i = 0; i < surfaceN; i++){
        cin >> temp >> temp; cin.ignore();
    }
    while(1){
        int vSpeed;
        cin >> temp >> temp >> temp >> vSpeed >> temp >> temp >> temp; cin.ignore();
        cout << 0 << " ";
        if(abs(vSpeed) > 35) cout << 4 << endl;
        else cout << 0 << endl;
    }
}
