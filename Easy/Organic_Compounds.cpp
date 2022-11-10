//https://www.codingame.com/training/easy/organic-compounds
#include <bits/stdc++.h>

using namespace std;

int main(){
    int valid;
    cin >> valid;
    vector<string> comp;
    for(string str; getline(cin, str);) 
        comp.push_back(str);
    auto at = [&comp](int i, int j){
        return  0 <= i && i < comp.size() && 0 <= j && j < comp[i].size() && isdigit(comp[i][j])? comp[i][j] - '0' : 0;
    };
    for(size_t i = 0; valid && i < comp.size(); ++i)
        for(size_t j = 0; valid && j < comp[i].size(); ++j)
            valid &= comp[i][j] != 'H' || at(i, j+3) + at(i, j-3) + at(i, j+1) + at(i-1, j) + at(i+1, j) == 4;
    cout << (valid? "VALID" : "INVALID") << endl;
}
