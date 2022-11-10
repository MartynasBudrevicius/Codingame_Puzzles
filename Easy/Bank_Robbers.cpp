//https://www.codingame.com/training/easy/bank-robbers
#include <bits/stdc++.h>

using namespace std;

int main(){
    int R, V;
    cin >> R >> V;
    uint64_t robbers[R] = {};
    uint64_t C, N;
    while(cin >> C >> N)
        *min_element(robbers, robbers + R) += pow(10, N) * pow(5, C - N);
    
    cout << *max_element(robbers, robbers + R) << '\n';
}
