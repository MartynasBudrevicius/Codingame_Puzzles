//https://www.codingame.com/training/medium/magic-square
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> sumRows(n, 0);
    vector<int> sumCols(n, 0);
    int sumDiag1 = 0, sumDiag2 = 0, squareN = n * n;
    vector<bool> found(squareN, false);
    bool magic = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int c;
            cin >> c;
            if (0 < c && c <= squareN)
                found[c - 1] = true;
            else
                magic = false;
            sumRows[j] += c;
            sumCols[i] += c;
            if (i == j)
                sumDiag1 += c;
            if (j == n - i - 1)
                sumDiag2 += c;
        }
    }
    magic &= sumDiag1 == sumDiag2;
    for_each(sumRows.begin(), sumRows.end(), [&magic, sumDiag1](int r) { magic &= (sumDiag1 == r);});
    for_each(sumCols.begin(), sumCols.end(), [&magic, sumDiag1](int r) { magic &= (sumDiag1 == r);});
    for_each(found.begin(), found.end(), [&magic](bool f) { magic &= f;});
    const char *res = magic ? "MAGIC" : "MUGGLE";
    cout << res << endl;
}
