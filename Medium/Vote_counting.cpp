//https://www.codingame.com/training/medium/vote-counting
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    string name[N];
    int vote[N], yes = 0, no = 0;
    for (int i = 0; i < N; i++)
        cin >> name[i] >> vote[i]; cin.ignore();
    string vname[M], vvote[M];
    for (int i = 0; i < M; i++)
        cin >> vname[i] >> vvote[i]; cin.ignore();
    for (int i = 0; i < N; i++){
        int voted = 0, yes2 = 0, no2 = 0;
        for (int x = 0; x < M; x++){
            if(vname[x] == name[i]){
                voted++;
                if(vvote[x] == "Yes")
                    yes2++;
                if(vvote[x] == "No")
                    no2++;
            }
        }
        if(voted <= vote[i]){
            yes += yes2;
            no += no2;
        }
    }
    cout << yes << " " << no;
}
