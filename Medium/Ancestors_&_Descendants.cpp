//https://www.codingame.com/training/medium/ancestors-descendants
#include <bits/stdc++.h>

using namespace std;

int main(){
    int count;
    cin >> count; cin.ignore();
    vector<string>ancestry;
    while (count--){
        int level;
        for(level = 0; cin.peek() == '.'; level++)
            cin.get();
        string name;
        getline(cin, name);
        int i = ancestry.size();
        if(level != i){
            cout << endl;
            ancestry.resize(level);
            i = 0;
        }
        ancestry.push_back(name);        
        for(; i != ancestry.size(); i++){
            if(i > 0)
                cout << " > ";
            cout << ancestry[i];
        }
    }
    cout << endl;
}
