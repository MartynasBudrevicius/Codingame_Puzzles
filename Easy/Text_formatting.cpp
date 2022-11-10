//https://www.codingame.com/training/easy/text-formatting
#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;
    getline(cin, x);
    for(int i = 0; i < x.length(); i++){ 
        x[i] = tolower( x[i] );
    }
    x = regex_replace(x, regex("[\\s]+"), " ");
    x = regex_replace(x, regex("[ ]*,[ ]*"), ",");
    x = regex_replace(x, regex("[ ]*\\.[ ]*"), ".");
    x = regex_replace(x, regex(",+"), ", ");
    x = regex_replace(x, regex("\\.+"), ". ");
    x = regex_replace(x, regex("[\\s]+$"), "");
    x[0] = toupper(x[0]);
    for(int i = 2; i < x.length(); i++){
        if(x[i-2] == '.' && x[i-1] == ' ' ){ 
            x[i] = toupper(x[i]);
        }
    }
    cout << x << endl;
}
