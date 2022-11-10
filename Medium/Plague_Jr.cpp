//https://www.codingame.com/training/medium/plague-jr
#include <bits/stdc++.h>

using namespace std;

int max_dis = 0;
vector<int> adj[10000];

void dfs(int s, int p = -1, int dis = 0){
    max_dis = max(max_dis, dis);
    for(auto u : adj[s])
        if(u!=p)
            dfs(u, s, dis+1);
}

int main(){
    int N;
    cin >> N; cin.ignore();
    for(int i = 0; i < N; i++){
        int A, B;
        cin >> A >> B; 
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    int max_node = 0, min_max_dis = 1000000000;
    for(int i = 0; i <= N; i++){
        max_dis = 0, dfs(i), min_max_dis=min(min_max_dis, max_dis);
    }
    cout << min_max_dis;
}
