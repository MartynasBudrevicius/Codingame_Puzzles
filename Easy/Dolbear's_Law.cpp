//https://www.codingame.com/training/easy/dolbears-law
#include <bits/stdc++.h>

using namespace std;

int main(){
    int M;
    cin >> M;
    int num, sum, times = 0, sa = 0;
    double total1 = 0, total2 = 0;
    for(int i = 0; i < M; i++){
        sum = 0;
        for(int x = 0; x < 15; x++){
            cin >> num;
            sum += num;
            times++;
            sa += num;
            if(times % 2 == 0){
                total2 += sa + 5;
                sa = 0;
            }
        }
        total1 += 10.0 + (sum - 40.0) / 7.0;
    }
    cout << fixed << setprecision(1) << total1 / M << endl;
    if(total1 / M >= 4.95 && total1 / M <= 30.44)
    cout << fixed << setprecision(1) << total2 / (times / 2) << endl;
}
