#include <bits/stdc++.h>

using namespace std;

double Reading(char symbol){
    string temp;
    getline(cin, temp, symbol);
    replace(temp.begin(), temp.end(), ',', '.');
    return stod(temp);
}

double longitude, latitude, minimum = numeric_limits<double>::max();

string answer;

int n;

int main(){
    longitude = Reading('\n');
    latitude = Reading('\n');
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++){
        string temp, name;
        getline(cin, temp, ';');
        getline(cin, name, ';');
        getline(cin, temp, ';');
        getline(cin, temp,  ';');
        double new_longitude = Reading(';'), new_latitude = Reading('\n');
        double x = (new_longitude - longitude) * cos((latitude + new_latitude) / 2), y = new_latitude - latitude, d = sqrt(x * x + y * y) * 6371;
        if(d < minimum){
            minimum = d;
            answer = name;
        }
    }
    cout << answer;
}
