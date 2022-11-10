//https://www.codingame.com/training/medium/escaping-the-cat
#include <bits/stdc++.h>

using namespace std;

int main(){
    int cat_speed;
    cin >> cat_speed;
    int i = 0;
    while (1){
        int mouse_x, mouse_y, cat_x, tmp_x, cat_y, tmp_y;
        cin >> mouse_x >> mouse_y >> cat_x >> cat_y; cin.ignore();
        i++;
        if(i == 70){
            tmp_x = cat_x * (-2);
            tmp_y = cat_y * (-2);
        }
        else if (i < 70){
            tmp_x = cat_x / -2;
            tmp_y = cat_y / -2;
        }
        cout << tmp_x << " " << tmp_y << endl;
    }
}
