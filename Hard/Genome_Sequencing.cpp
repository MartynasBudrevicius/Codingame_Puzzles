//https://www.codingame.com/training/hard/genome-sequencing
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N; cin.ignore();
    string words[N];
    int order[N], answer = 999999;
    for(int i = 0; i < N; i++){
        cin >> words[i]; cin.ignore();
        order[i] = i;
    }
    do{
        string combined = "";
        for(int i = 0; i < N; i++){
            bool foundCombination = false;
            if(i == 0)
                combined = words[order[0]];
            else{
                for(int j = 0; j < combined.length(); j++){
                    int join = min(combined.length() - j, words[order[i]].length());
                    if(combined.substr(j, join) == words[order[i]].substr(0, join)){
                        combined += words[order[i]].substr(join, 999999);
                        foundCombination = 1;
                        j = combined.length();
                    }
                }
                if(!foundCombination)
                    combined += words[order[i]];
            }
        }
        answer = min(answer, (int)combined.length());        
    }
    while(next_permutation(order,order + N));
    cout << answer << endl;
}
