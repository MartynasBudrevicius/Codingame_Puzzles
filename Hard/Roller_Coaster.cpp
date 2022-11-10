//https://www.codingame.com/training/hard/roller-coaster
#include <bits/stdc++.h>

using namespace std;

int main(){
    int L, C, N;
    cin >> L >> C >> N;
	int P[N];
    long long earnings = 0;
	pair<int, int> peopleQue[N];
	for(int i = 0; i < N; i++){
        cin >> P[i];
    }
	for(int i = 0; i < N; i++){
		int now = i, left = L;
		while(P[now] <= left){
			left -= P[now];
            now = (now + 1) % N;
			if(now == i){
                break;
            }
		}
		peopleQue[i] = {L - left, now};
	}
    int now = 0;
	for(int i = 0; i < C; i++){
        earnings += peopleQue[now].first;
        now = peopleQue[now].second;
	}
	cout << earnings << endl;
}
