//https://www.codingame.com/training/medium/folding-paper
#include <bits/stdc++.h>

using namespace std;

int main(){
    string dirs = "UDLR";
    int lists[4] = {1,1,1,1};
    string order;
    getline(cin, order);
    for(int i = 0; i < order.length(); i++){
        int t = dirs.find(order[i]);
        lists[t^2] <<= 1;
        lists[t^3] <<= 1;
        lists[t^1] += lists[t];
        lists[t] = 1;
    }
    string side;
    getline(cin, side);
    cout << lists[dirs.find(side[0])];
}
