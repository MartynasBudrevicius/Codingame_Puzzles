//https://www.codingame.com/training/easy/lumen
#include <bits/stdc++.h>

using namespace std;

class Candle{
    public:
        int x,y;
        Candle(int x, int y){
            this->x = x;
            this->y = y;
        }
};

int main()
{
    int N, L;
    cin >> N >> L;
    vector<Candle> candles;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            string cell;
            cin >> cell; cin.ignore();
            if(cell.compare("C") == 0)
                candles.push_back(Candle(i,j));
        }
    }
    int dark_spots = 0;
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            int light=0;
            for(int i=0; i<candles.size(); i++){
                int cX = candles[i].x;
                int cY = candles[i].y;
                if(abs(row-cX)<L && abs(col-cY)<L)
                    light += (L - abs(row-cX));
            }
            if (light<=0)
                dark_spots+=1;
        }
    }
    cout << dark_spots << endl;
    return 0;
}
