//https://www.codingame.com/training/medium/don't-panic-episode-1
#include <bits/stdc++.h>

using namespace std;

int main(){
    int nbFloors, width, nbRounds, exitFloor, exitPos, nbTotalClones, nbAdditionalElevators, nbElevators;
    cin >> nbFloors >> width >> nbRounds >> exitFloor >> exitPos >> nbTotalClones >> nbAdditionalElevators >> nbElevators; cin.ignore();
    int floor[nbElevators+1];
    floor[exitFloor] = exitPos;
    for(int i = 0; i < nbElevators; i++){
        int elevatorFloor, elevatorPos;
        cin >> elevatorFloor >> elevatorPos; cin.ignore();
        floor[elevatorFloor] = elevatorPos;
    }
    while(1){
        int cloneFloor, clonePos;
        string direction;
        cin >> cloneFloor >> clonePos >> direction; cin.ignore();
        if(((clonePos < floor[cloneFloor]) && (direction =="LEFT")) || ((clonePos > floor[cloneFloor]) && (direction=="RIGHT")))
			cout<<"BLOCK"<<endl;
        else
            cout << "WAIT" << endl;
    }
}
