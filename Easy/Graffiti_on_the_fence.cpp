//https://www.codingame.com/training/easy/graffiti-on-the-fence
#include <bits/stdc++.h>

using namespace std;

struct A{
    long long int s, e;
};

bool sorting(A a, A b){
    if(a.s != b.s)
        return a.s < b.s;
    return a.e < b.e;
}

int main(){
    vector <A> F;
    long long int L, N;
    cin >> L >> N;
    for(int i = 0; i < N; i++){
        long long int a, b;
        cin >> a >> b;
        F.push_back({a, b});
    }
    sort(F.begin(), F.end(), sorting);
    vector <A> Ans;
    int e = 0;
    for(int i = 0; i < N; i++){
        if(F[i].s > e)
            Ans.push_back({e, F[i].s});
        e = F[i].e;
    }
    if(e < L)
        Ans.push_back({e, L});
    for(int i = 0; i < Ans.size(); i++)
        cout << Ans[i].s << " " << Ans[i].e << endl;
    if(Ans.size() == 0)
        cout << "All painted";
}
