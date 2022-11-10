//https://www.codingame.com/training/easy/rugby-score
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N; cin.ignore();
    for(int tries = 0; 5 * tries <= N; ++tries){
        auto R1 = N - 5 * tries;
        for(int trans = 0; trans <= tries && 2 * trans <= R1; ++trans){
            auto R2 = R1 - 2*trans;
            if (!(R2 % 3))
                cout << tries << ' ' << trans << ' ' << R2 / 3 << endl;
        }
    }
}
