//https://www.codingame.com/training/medium/cards-castle
#include <bits/stdc++.h>

using namespace std;

int main(){
    int H;
    cin >> H; cin.ignore();
    string S[H];
    for(int i = 0; i < H; i++){
        getline(cin, S[i]);
    }
    bool good = true;
    for(int x = 0; x < H; x++){
        for(int i = 0; i < S[x].size(); i++){
            if(S[x][i] == '/'){
                if(i + 1 == S[x].size() || S[x][i + 1] != 92)
                    good = false;
                if(x + 1 != H && S[x + 1][i] != 92)
                    good = false;
            }
            if(S[x][i] == 92){
                if(i - 1 == -1 || S[x][i - 1] != '/')
                    good = false;
                if(x + 1 != H && S[x + 1][i] != '/')
                    good = false;
            }
        }
    }
    if(!good){
        cout << "UNSTABLE";
        return 0;
    }
    cout << "STABLE";
}
