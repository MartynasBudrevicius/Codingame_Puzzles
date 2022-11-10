//https://www.codingame.com/training/easy/darts
#include <bits/stdc++.h>

using namespace std;

bool compare(pair<pair<string, int>, int> a, pair<pair<string, int>, int> b){
    if(a.first.second != b.first.second)
        return a.first.second > b.first.second;
    return a.second < b.second;
}

void sort(map<string, int> M, map <string, int> N){
    vector<pair<pair<string, int>, int> > A;
    for(auto it : M){
        A.push_back(make_pair(it, N[it.first]));
    }
    sort(A.begin(), A.end(), compare);
    for (auto&it : A) {
        cout << it.first.first << ' ' << it.first.second << endl;
    }
}

int main(){
    int SIZE;
    cin >> SIZE; cin.ignore();
    SIZE /= 2;
    int N;
    cin >> N; cin.ignore();
    map <string, int> Names, inputOrder;
    for (int i = 0; i < N; i++){
        string name;
        getline(cin, name);
        Names[name] = 0;
        inputOrder[name] = i;
    }
    int T;
    cin >> T; cin.ignore();
    for (int i = 0; i < T; i++){
        string throwName;
        int throwX, throwY;
        cin >> throwName >> throwX >> throwY; cin.ignore();
        if(abs(throwX) <= SIZE && abs(throwY) <= SIZE){
            if(sqrt(pow(abs(throwX), 2) + pow(abs(throwY), 2)) <= SIZE){
                if(abs(throwX) + abs(throwY) <= SIZE){
                    Names[throwName] += 5;
                }
                Names[throwName] += 5;
            }
            Names[throwName] += 5;
        }
    }
    sort(Names, inputOrder);
}
