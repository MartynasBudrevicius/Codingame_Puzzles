//https://www.codingame.com/training/medium/rubik%C2%AE
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N; cin.ignore();
    if(N == 1){
        cout << 1;
        return 0;
    }
    else if(N == 2){
        cout << 8;
        return 0;
    }
    cout <<  N * 4 + ((N - 2) * 8) + (((N * N) - N * 2 - (N - 2) * 2) * 6);
}
