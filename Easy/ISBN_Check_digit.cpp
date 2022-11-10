//https://www.codingame.com/training/easy/isbn-check-digit
#include <bits/stdc++.h>

using namespace std;

bool isValidISBN(string isbn){
    int check{0}, N, mod, weight;
    N = isbn.length() - 1;
    if(N == 9){
        mod = 11;
        weight = 10; 
    }
    else if(N == 12){
        mod = 10;
        weight = 1;
    }
    else return false;
    for(int i = 0; i < N; ++i, weight = (N==9) ? weight - 1 : 4 - weight){
        if(!isdigit(isbn[i])) return false;
        check += weight * isbn[i];
    }
    if(isdigit(isbn[N]))
        check += isbn[N];
    else if(mod==11 && isbn[N]=='X')
        check += 58;
    else return false;
    return check % mod == 0;
}

int main(){
    int N;
    cin >> N; cin.ignore();
    vector<string> invalid;
    while(N--){
        string isbn;
        getline(cin, isbn);
        if (!isValidISBN(isbn)) invalid.push_back(isbn);
    }
    cout << invalid.size() << " invalid:\n";
    for_each(invalid.begin(), invalid.end(), [](auto a){cout << a << endl;});
}
