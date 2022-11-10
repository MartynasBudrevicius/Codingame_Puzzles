//https://www.codingame.com/training/easy/tictactoe
#include <bits/stdc++.h>

using namespace std;

static const char O = 'O';
static const char VOID = '.';

int main(){
    vector<vector<int>> winers {{0, 1 ,2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
    string board;
    int winIndex = -1, countWinPositions = 0;
    for(int i = 0; i < 3; i++){
        string line;
        getline(cin, line);
        board += line;
    }
    for(auto &vindex: winers){
        string line;
        for(auto &index: vindex){
            line += board[index];
        }
        if(count(line.begin(), line.end(), O) == 2 && count(line.begin(), line.end(), VOID) == 1){
            for (auto &index: vindex){
                if(board[index] == VOID){
                    winIndex = index;
                    ++countWinPositions;
                }
            }
        }
    }
    if(!countWinPositions){
        cout << "false" << endl;
        return 0;
    }
    board[winIndex] = 'O';
    for (int i = 0; i < 9; ++i){
        cout << board[i];
        if(i % 3 == 2) cout << endl;
    }
}
