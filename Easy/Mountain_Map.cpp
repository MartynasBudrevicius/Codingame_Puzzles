//https://www.codingame.com/training/easy/mountain-map
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, maxHeight = 0;
    vector<int> heightList;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++){
        int height;
        cin >> height; cin.ignore();
        heightList.push_back(height);
        maxHeight = max(height, maxHeight);
    }
    for (int i = maxHeight; i > 0; i--){
        string str = "";
        for(int h : heightList){
            if(+h >= i){
                cout << str;
                str = "";
                cout << string(i - 1, ' ') + '/' + string((h - i) * 2, ' ') + '\\';
                str += string(i - 1, ' ');
            }
            else str += string(h*2, ' ');
        }
        cout << endl;
    }

}
