//https://www.codingame.com/training/medium/the-fall-episode-1
#include <bits/stdc++.h>

using namespace std;

int W, H;
int xPos, yPos;

int main(){
    cin >> W >> H;
    int Map[H][W];
    for(int i = 0; i < H; i++){
        for(int x = 0; x < W; x++)
            cin >> Map[i][x];
    }
    cin >> xPos;
    while(1){
        string POS;
        cin >> xPos >> yPos >> POS;
        if(Map[yPos][xPos] == 1 || Map[yPos][xPos] == 7 || Map[yPos][xPos] == 8 || Map[yPos][xPos] == 9 || Map[yPos][xPos] == 3)
            yPos++;
        else if(Map[yPos][xPos] == 2 || Map[yPos][xPos] == 6){
            if(POS == "LEFT")
                xPos++;
            else
                xPos--;
        }
        else if(Map[yPos][xPos] == 4 || Map[yPos][xPos] == 10 || Map[yPos][xPos] == 12){
            if(POS == "TOP")
                xPos--;
            else
                yPos++;
        }
        else if(Map[yPos][xPos] == 5 || Map[yPos][xPos] == 11 || Map[yPos][xPos] == 13){
            if(POS == "TOP")
                xPos++;
            else
                yPos++;
        }
        cout << xPos << " " << yPos << endl;
    }
}
