//https://www.codingame.com/training/easy/the-river-ii-
#include <bits/stdc++.h>

using namespace std;

int sum_digits (int r){
    return (r == 0) ? 0 : r % 10 + sum_digits (r / 10);
}

int main(){
    int r1;
    cin >> r1;
    int number_length = log10(r1) + 1, min_i = max (0 , r1 - 9 * number_length);
    for(int i = min_i; i < r1; i++){
        if(i + sum_digits (i) == r1){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
