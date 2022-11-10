//https://www.codingame.com/training/medium/telephone-numbers
#include <bits/stdc++.h>

using namespace std;

int answer = 0;

struct node{
    node *child[10] = {};
};

void NewNumber(string t, node *a){
    for(int x = 0; x < t.size(); x++){
        int n = t[x] - '0';
        if(a -> child[n] == 0){
            a -> child[n] = new node();
            answer++;
        }
        a = a -> child[n];
    }
}

int main(){
    int N;
    cin >> N;
    string t;
    node *root = new node();
    for(int i = 0; i < N; i++){
        cin >> t;
        NewNumber(t, root);
    }
    cout << answer << endl;
}
