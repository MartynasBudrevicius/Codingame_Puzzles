#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    bool good = false;
    int number = 2;
    for(int i = 2; i <= n; i++){
        number *= 2;
        if(number > n)
            number -= n;
    }
    if(number % n == 2)
        good = true;   
    if(!isPrime && good){
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
}
