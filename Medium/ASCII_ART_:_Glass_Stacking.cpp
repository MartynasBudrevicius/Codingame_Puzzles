//https://www.codingame.com/training/medium/ascii-art-glass-stacking
#include <bits/stdc++.h>

using namespace std;

vector<string> GLASS = { 
    " *** ",
    " * * ",
    " * * ",
    "*****" 
};

int main(){
    int N; cin >> N;
    auto Pyramid = GLASS;
    for(int k = 2; N > k; N -= k++) {
        for(auto &l : Pyramid)
            l = "   " + l + "   ";
        for(auto &g : GLASS){
            Pyramid.push_back(g);
            for (int i = 1; i < k; i++)
                Pyramid.back() += " " + g;
        }
    }
    for (auto &l : Pyramid)
        cout << l << endl;
}
