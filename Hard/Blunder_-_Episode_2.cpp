//https://www.codingame.com/training/hard/blunder-episode-2
#include <bits/stdc++.h>

using namespace std;

int N;

struct rooms{ 
    int money, doors1, doors2, end, allMoney;
};

int main(){
    cin >> N; cin.ignore();
    rooms room[N + 1];
    for(int i = 0; i < N; i++){
        int id;
        string s1,  s2;
        cin >> id;
        cin >> room[id].money >> s1 >> s2; cin.ignore();
        if(s1 == "E")
            room[id].doors1 = N;
        else
            room[id].doors1 = stoi(s1);
        if(s2 == "E")
            room[id].doors2 = N; 
        else
            room[id].doors2 = stoi(s2);
        room[id].end = false;
        room[id].allMoney = 0;
    }
    room[N].end = true;
    room[N].allMoney = 0;
    bool change = true;
    while(change){
        change = false;
        for(int i = N - 1; i >= 0; i--){
            if(!room[i].end && room[room[i].doors1].end && room[room[i].doors2].end){
                room[i].end = true; 
                room[i].allMoney = room[i].money + max(room[room[i].doors1].allMoney, room[room[i].doors2].allMoney);
                change = true;
            }
        }
    }
    cout << room[0].allMoney << endl;
}
