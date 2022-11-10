//https://www.codingame.com/training/hard/apple-tree
#include <bits/stdc++.h>

using namespace std;

struct apple{
    int x, y, z, r;
};

int N, z;

int main(){
    cin >> N >> z; cin.ignore();
    vector<apple> A;
    for(int i = 0; i < N; i++){
        int x, y, z, r;
        cin >> x >> y >> z >> r; cin.ignore();
        A.push_back({x, y, z, r});
    }
    deque<apple> Falling;
    Falling.push_back(A[z]);
    A.erase(A.begin() + z);
    while(!Falling.empty()){
        apple temp = Falling.front();
        Falling.pop_front();
        for(int x = 0; x < A.size(); x++){
            if(sqrt(pow(A[x].x - temp.x, 2) + pow(A[x].y - temp.y, 2)) < A[x].r + temp.r && A[x].z <= temp.z){
                Falling.push_back(A[x]);
                A.erase(A.begin() + x);
                x--;
            }
        }
    }
    cout << A.size() << endl;
}
