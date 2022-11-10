//https://www.codingame.com/training/easy/the-descent
#include <bits/stdc++.h>

using namespace std;
int main(){
    while(1){
        int big = 0, n;
        for(int i = 0; i < 8; i++){
            int mountainH;
            cin >> mountainH; cin.ignore();
            if(mountainH > big){
                big = mountainH;
                n = i;
            }
        }
        cout << n << endl;
    }
}
