//https://www.codingame.com/training/easy/mime-type
#include <bits/stdc++.h>

using namespace std;

int n, m;

int main(){
    cin >> n >> m; cin.ignore();
    string types, names;
    map<string, string> type;
    for(int i = 0; i < n; i++){
        cin >> types >> names; cin.ignore();
        transform(types.begin(), types.end(), types.begin(), ::toupper);
        type[types] = names;
    }
    for (int i = 0; i < m; i++){
        string fname, mime;
        getline(cin, fname);
        transform(fname.begin(), fname.end(), fname.begin(), ::toupper);
        int position = fname.find_last_of(".");
        if(position > fname.size()) cout << "UNKNOWN\n";
        else{
            mime = fname.substr(position + 1);
            if(type.find(mime) == type.end()) cout << "UNKNOWN\n";
            else cout << type[mime] << endl;
        }
    }
}
