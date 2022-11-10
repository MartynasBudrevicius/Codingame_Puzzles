#include <bits/stdc++.h>

using namespace std;

 
void NewLine(int indent){
    cout << endl << string(4 * indent, ' ');
}
 
int main(){
    int N;
    cin >> N; cin.ignore();
    
    bool started = false, inString = false, newLineNeeded = false;
    int indent = 0;
    for (int i = 0; i < N; i++) {
        string CGXLine;
        getline(cin, CGXLine);
        for (char ch: CGXLine){
            if (inString)
                cout << ch;
            else if (ch != ' ' && ch != '\t'){
                switch(ch){
                    case '(':
                        if(started){
                            NewLine(indent);
                        }
                        cout << ch;
                        ++indent;
                        newLineNeeded = true;                      
                        break;
                    case ')':
                        --indent;
                        NewLine(indent);
                        cout << ch;
                        newLineNeeded = true;
                        break;
                    case ';':
                        cout << ch;
                        newLineNeeded = true;
                        break;
                    default:
                        if(newLineNeeded){
                            NewLine(indent);
                            newLineNeeded = false;
                        }
                        cout << ch;
                        break;
                }
            }
            if (ch == '\'')
                inString = !inString;
            started = true;
        }
    }
}
