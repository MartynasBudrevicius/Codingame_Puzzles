//https://www.codingame.com/training/medium/target-firing
#include <bits/stdc++.h>

using namespace std;

struct S{
    string TYPE;
    int HP, ARMOR;
    double DAMAGE;
    int turns;
    double value;
};

bool sorting(S a, S b){
    return a.value > b.value;
}

int main(){
    int N;
    cin >> N;
    S Spaceships[N];
    for (int i = 0; i < N; i++){
        cin >> Spaceships[i].TYPE >> Spaceships[i].HP >> Spaceships[i].ARMOR >> Spaceships[i].DAMAGE;
        int damage = 10;
        if(Spaceships[i].TYPE == "FIGHTER")
            damage = 20;
        damage = max(1, damage - Spaceships[i].ARMOR);
        if(Spaceships[i].HP % damage != 0)
            Spaceships[i].turns = Spaceships[i].HP / damage + 1;
        else
            Spaceships[i].turns = Spaceships[i].HP / damage;
        Spaceships[i].value = Spaceships[i].DAMAGE / Spaceships[i].turns; 
    }
    sort(Spaceships, Spaceships + N, sorting);
    int totalturns = 0, totallife = 5000;
    for (int i = 0; i < N; i++){
        totalturns += Spaceships[i].turns;
        totallife -= Spaceships[i].DAMAGE * totalturns;
    }
    if(totallife < 0){
        cout << "FLEE";
        return 0;
    }
    cout << totallife << endl;
}
