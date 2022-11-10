//https://www.codingame.com/training/easy/the-river-i-
#include <iostream>

using namespace std;

long long sum_digits (long long r) {
    if (r < 10)
        return r;
    return r % 10 + sum_digits (r / 10);
}

int main(){
    long long r1, r2;
    cin >> r1 >> r2;
    while (r1 != r2){
        if (r1 > r2)
            swap (r1, r2);
        r1 += sum_digits (r1);
    }
    cout << r1 << endl;
}
