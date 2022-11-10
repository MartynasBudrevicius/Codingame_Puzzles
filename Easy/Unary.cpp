//https://www.codingame.com/training/easy/unary
#include <bits/stdc++.h>

using namespace std;

int main(){
    string MESSAGE;
    getline(cin, MESSAGE);
    bool pbit = MESSAGE[0] & 0x40;
    cout << (pbit ? "0 " : "00 ");
    for (auto c: MESSAGE){        
        for (unsigned char bm = 0x40; bm != 0; bm /= 2){
            bool bit = (c & bm);
            cout << ((bit == pbit) ? "0" : (pbit = bit) ? " 0 0" : " 00 0");
        }
    }
}
