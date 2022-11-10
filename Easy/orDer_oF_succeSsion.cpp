//https://www.codingame.com/training/easy/order-of-succession
#include <bits/stdc++.h>

using namespace std;

struct Person{
    string name, parent;
    int birth;
    string death, religion, gender;
    int index;
};

bool Sorting(Person a, Person b){
    if(a.gender == b.gender)
        return a.birth < b.birth;
    return a.gender > b.gender;
}

void Dfs(vector <Person> P, vector <Person> Child[], int index){
    if(P[index].death == "-" && P[index].religion == "Anglican")
        cout << P[index].name << "\n";
    for(int i = 0; i < Child[index].size(); i++)
        Dfs(P, Child, Child[index][i].index);
}

int main(){
    int n;
    cin >> n;
    vector <Person> P, Child[n];
    int root;
    for(int i = 0; i < n; i++){
        string name, parent, death, religion, gender;
        int birth;
        cin >> name >> parent >> birth >> death >> religion >> gender;
        P.push_back({name, parent, birth, death, religion, gender, i});
        if(parent == "-")
            root = i;
    }
    for(int i = 0; i < n; i++){
        if(P[i].parent != "-"){
            for(int x = 0; x < n; x++){
                if(x != i && P[i].parent == P[x].name)
                    Child[x].push_back(P[i]);
            }
        }
    }
    for(int i = 0; i < n; i++)
        sort(Child[i].begin(), Child[i].end(), Sorting);
    Dfs(P, Child, root);
}
