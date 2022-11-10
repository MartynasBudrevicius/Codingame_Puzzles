//https://www.codingame.com/training/easy/111-rubiks-cube-movements
#include <bits/stdc++.h>

using namespace std;

int main(){
    string rotations, base {"LFRBUD"};
    getline(cin, rotations);
    char face1, face2;
    cin>> face1 >> face2;
    map<string,vector<int>> m = {{"z", {5,1,4,3,0,2}}, {"z'", {4,1,5,3,2,0}}, {"y", {1,2,3,0,4,5}}, {"y'", {3,0,1,2,4,5}}, {"x'", {0,4,2,5,3,1}}, {"x", {0,5,2,4,1,3}}};        
    string current(base),nouveau;
    istringstream iss(rotations);
    while(getline(iss ,rotations, ' ')){
        nouveau = current;
        for(int i = 0; i < 6 ; i++)
            nouveau[i] = current[m[rotations][i]];
        current = nouveau;             
    }
    cout << base[current.find(face1)] << endl << base[current.find(face2)];
}
