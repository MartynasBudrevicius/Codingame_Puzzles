//https://www.codingame.com/training/easy/hunger-games
#include <bits/stdc++.h>

using namespace std;

struct Data{
    set<string> victims;
    string killer;
};

int main(){
    int T, R;
    string name, killer, kill;
    map<string,Data> players;
    cin >> T; cin.ignore();
    for(int i = 0; i < T; ++i){
        getline(cin, name);
        players[name];
    }
    cin >> R; cin.ignore();
    for(int i = 0; i < R; ++i){
        string killer, kill;
        cin >> killer >> kill;
        bool last = false;
        while(!last){
            cin >> name;
            if(!(last = (*name.rbegin() != ',')))
                name = name.substr(0,name.size()-1);
            players[killer].victims.insert(name);
            players[name].killer = killer;
        }
    }
    for(const auto& p : players){
        cout << "Name: " << p.first;
        cout << "\nKilled: ";
        const auto& victims = p.second.victims;
        if (victims.empty())
            cout << "None";
        else
            for(auto it = victims.begin(); it != victims.end(); ++it){
                if (it != victims.begin())
                    cout << ", ";
                cout << *it;
            }
        cout << "\nKiller: " << (!p.second.killer.size() ? "Winner" : p.second.killer);
        if (--T)
            cout << "\n\n";
    }
}
