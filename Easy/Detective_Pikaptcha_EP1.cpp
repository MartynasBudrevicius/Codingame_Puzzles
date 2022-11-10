//https://www.codingame.com/training/easy/detective-pikaptcha-ep1
#include <bits/stdc++.h>

using namespace std;

int main(){
    int width, height;
    cin >> width >> height;
    vector<string> grid(height);
    for(auto& line : grid)
        cin >> line;
    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            if(grid[i][j] == '#')
                cout << '#';
            else{
                int value = 0;
                if (j - 1 >= 0)
                    value += (grid[i][j - 1] == '0');
                if (j + 1 < width)
                    value += (grid[i][j + 1] == '0');
                if (i - 1 >= 0)
                    value += (grid[i - 1][j] == '0');
                if (i + 1 < height)
                    value += (grid[i + 1][j] == '0');
                cout << value;
            }
        }
        cout << endl;
    }
}
