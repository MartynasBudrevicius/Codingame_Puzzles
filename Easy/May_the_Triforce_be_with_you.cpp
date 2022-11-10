//https://www.codingame.com/training/easy/may-the-triforce-be-with-you
#include <bits/stdc++.h>

using namespace std;

int N, i, j;

int main(){
    for(cin >> N, N *= 2; i < N; ++i, j = 0, cout << '\n'){
        while(j < N + i) cout << (!j++ && !i? '.' : N > i + j || 2 * i / N && abs(N - j) < N - i? ' ' : '*');
    }
}
