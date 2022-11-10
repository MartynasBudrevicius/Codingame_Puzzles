//https://www.codingame.com/training/easy/how-time-flies
#include <bits/stdc++.h>

using namespace std;

int main() {
    string BEGIN, END;
    cin >> BEGIN; cin.ignore();
    tm tmB = {}, tmE = {};
    stringstream ssB(BEGIN);
    ssB >> get_time(&tmB, "%d.%m.%Y");
    time_t tB = mktime(&tmB);
    cin >> END; cin.ignore();
    stringstream ssE(END);
    ssE >> get_time(&tmE, "%d.%m.%Y");
    time_t tE = mktime(&tmE);
    int days = difftime(tE, tB) / (3600 * 24);
    int years = days / 365;
    int months = (days - (years * 366)) / 30;
    cout << (years > 0 ? to_string(years) + " year" + (years > 1 ? "s" : "") + ", " : "")
         << (months > 0 ? to_string(months) + " month" + (months > 1 ? "s" : "") + ", " : "")
         << "total " << days << " days" << endl;
}
