//https://www.codingame.com/training/medium/the-gift
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sum;
    cin >> n >> sum;
    int available = 0, B[n];
    for(int i = 0; i < n; i++) {
        cin >> B[i];
        available += B[i];
    }
    sort(B, B + n);
    if(available < sum)
        cout << "IMPOSSIBLE" << endl;
    else{
        for(int x = 0; x < n; x++){
            if(B[x] * (n - x) <= sum){
                cout << B[x] << endl;
                sum -= B[x];
            }
            else{
                cout << sum / (n - x) << endl;
                sum -= sum / (n - x);
            }
        }
    }
}
