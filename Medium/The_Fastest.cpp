//https://www.codingame.com/training/medium/the-fastest
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    string t, best_time = "24:00:00";
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> t;
        if(t < best_time){
            best_time = t;
        }
    }
    cout << best_time << endl;
}
