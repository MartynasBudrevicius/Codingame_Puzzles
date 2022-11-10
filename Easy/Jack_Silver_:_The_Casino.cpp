//https://www.codingame.com/training/easy/jack-silver-the-casino
#include <bits/stdc++.h>

using namespace std;

int main(){
    int ROUNDS, CASH;
    cin >> ROUNDS >> CASH;
    for(int i = 0; i < ROUNDS; i++){
        int x, y, newc;
        string name;
        cin >> x >> name;
        if(CASH % 4 == 0)
            newc = CASH / 4;
        else
            newc = CASH / 4 + 1;
        if(name == "PLAIN"){
            cin >> y;
            if(x == y)
                CASH += newc * 35 + newc;
            CASH -= newc;
        }
        else if(name == "ODD"){
            if(x % 2 != 0 && x != 0)
                CASH += 2 * newc;
            CASH -= newc;
        }
        else if(name == "EVEN"){
            if(x % 2 == 0 && x != 0)
                CASH += 2 * newc;
            CASH -= newc;
        }
    }
    cout << CASH;
}
