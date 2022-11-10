//https://www.codingame.com/training/medium/dwarfs-standing-on-the-shoulders-of-giants
#include <bits/stdc++.h>

using namespace std;

void DFS(vector <int> A[], bool V[], int &ans, int now, int index){
    ans = max(ans, now);
    V[index] = true;
    for(int x = 0; x < A[index].size(); x++)
        DFS(A, V, ans, now + 1, A[index][x]);
}

int main(){
    int n;
    cin >> n;
    vector <int> A[10000];
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        A[x].push_back(y);
    }
    bool V[10000];
    for(int x = 0; x < 10000; x++)
        V[x] = false;
    int ans = 0;
    for(int x = 0; x < 10000; x++){
        if(!V[x])
            DFS(A, V, ans, 1, x);
    }
    cout << ans;
}
