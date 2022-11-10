//https://www.codingame.com/training/easy/a-mountain-of-a-mole-hill
#include <iostream>

using namespace std;

int main(){
    int rv = 0;
    string l, pl(16, ' ');
    for(int y = 0; y < 16 && getline(cin, l); y++, pl = l) 
        for(int x = 0, in = 0, fs = 0; x < 16; x++){
            switch(l[x]){
                case '|':{
                    in = !in; break;
                }
                case 'o':{
                    rv += in; break;
                }
                case '+':{
                    int cfs = string("+|").find(pl[x]) != string::npos ? 1 : -1;
                    fs = fs ? (in = fs != cfs ? !in : in, 0) : cfs;
                    break;
                }
            }
        }
    cout << rv << endl;
}
