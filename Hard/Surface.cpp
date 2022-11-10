//https://www.codingame.com/training/hard/surface
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> m;
int dx[] = {0,1,0,-1}, dy[] = {1,0,-1,0};
int w, h, c=1;

int bfs(int x,int y){
    int ret = 0;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(q.size()){
        x = q.front().first, y = q.front().second;
        q.pop();
        if(x < 0 || w <= x || y < 0 || h <= y || m[x][y] == -2 || m[x][y] >= 0)
            continue; 
        ++ret;
        m[x][y] = c;
        for(int i = 0; i < 4; ++i)
            q.push({x + dx[i], y + dy[i]});
    }
    return ret;
}
int main(){
    cin >> w >> h;
    m.assign(w,vector<int>(h));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; ++j){
            char c;
            cin >> c;
            m[j][i] = c == '#' ? 0 : -1;
        }
    }
    vector <int> ans(1,0);
    for(int i = 0; i < w; ++i){
        for(int j = 0; j < h; ++j){
            if(m[i][j] == -1)
                ans.push_back(bfs(i,j)), ++c;
        }
    }
    int n, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        cout << ans[m[x][y]] << endl;
    }
}
