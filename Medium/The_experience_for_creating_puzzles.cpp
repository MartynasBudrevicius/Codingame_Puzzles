//https://www.codingame.com/training/medium/the-experience-for-creating-puzzles
#include <bits/stdc++.h>

using namespace std;

int main(){
    int Level, Xp, N;
    cin >> Level >> Xp >> N;
    int G = N * 300;
    while(G >= Xp){
        G -= Xp;
        Level++;
        Xp = Level * sqrt(Level) * 10;
    }
    cout << Level << endl << Xp - G << endl;
}
