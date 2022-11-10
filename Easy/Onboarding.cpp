//https://www.codingame.com/training/easy/onboarding
#include <bits/stdc++.h>

using namespace std;

string Enemy[2];

int Distance[2];

int main(){
    while(1){
        cin >> Enemy[0] >> Distance[0] >> Enemy[1] >> Distance[1];
        cout << (Distance[0] < Distance[1] ? Enemy[0] : Enemy[1]) << endl;
    }
}
