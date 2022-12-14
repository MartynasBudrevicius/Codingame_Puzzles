//https://www.codingame.com/training/easy/power-of-thor-episode-1
#include <bits/stdc++.h>

using namespace std;

int Compare(int a, int b){
    return (a > b) - (a < b);
}

map <int, string> MOVE_X {{-1, "W"}, {0, ""}, {1, "E"}}, MOVE_Y {{-1, "N"}, {0, ""}, {1, "S"}};

pair <int, int> light, thor;

int remainingTurns;

int main(){
    cin >> light.first >> light.second >> thor.first >> thor.second;
    while(1){
        cin >> remainingTurns;
        cout << MOVE_Y[Compare(light.second, thor.second)] << MOVE_X[Compare(light.first, thor.first)] << endl;
        thor.first += Compare(light.first, thor.first);
        thor.second += Compare(light.second, thor.second);
    }
}
