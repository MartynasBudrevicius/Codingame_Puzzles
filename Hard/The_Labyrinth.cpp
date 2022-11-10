//https://www.codingame.com/training/hard/the-labyrinth
#include <bits/stdc++.h>

using namespace std;

int main(){
    int H,W,A;
    cin >> H >> W >> A; cin.ignore();
    vector<string> labyrinth(H);
    bool  get_out = false;
    while(1){
        int y, x;
        cin >> y >> x; cin.ignore();
        for (int i = 0; i < H; i++)
            cin >> labyrinth[i], cin.ignore();
        auto find_symbol = [&](char const target) -> char const*
        {
            struct XY {int x, y; char const*initial_step; operator int()const{return(x&0xFFFF)|(y<<16);}};
            vector<XY> current_wave{{x,y,nullptr}}, next_wave;
            bool visited_cells[W * H];
            memset(visited_cells,false,sizeof(visited_cells));
            #define access_visited_cells(x,y) visited_cells[(x)+W*(y)]
            access_visited_cells(x,y) = true;
            while(current_wave.size()){
                for(XY const& p : current_wave){
                    char const* found_first_step = nullptr;
                    auto test_direction = [&](int const dx,int const dy) -> bool
                    {   
                        static map<XY,char const*> initial_steps_names{{{1,0},"RIGHT"},  {{-1,0},"LEFT"},  {{0,1},"DOWN"}, {{0,-1},"UP"}};
                        char const*const first_step_name = p.initial_step ? p.initial_step : initial_steps_names[{dx,dy}];
                        int const  test_x=p.x+dx, test_y=p.y+dy;
                        char const c = labyrinth[test_y][test_x];
                        bool & visited = access_visited_cells(test_x,test_y);
                        if(!visited){
                            if(target==c){
                                found_first_step = first_step_name;
                                return true;
                            }
                            if(c=='.' || c=='T'){
                                next_wave.push_back({test_x,test_y,first_step_name});
                                visited = true;
                            }
                        }
                        return false;
                    };
                    if(test_direction(1,0) || test_direction(-1,0) || test_direction(0,1) || test_direction(0,-1))
                        return found_first_step;
                }
                current_wave.assign(next_wave.begin(), next_wave.end());
                next_wave.resize(0);
            }
            return nullptr;
        };
        char const* go = "error123";
        again:
        if(get_out)
            go = find_symbol('T');
        else{
            static bool search_fog = true;
            go = find_symbol( search_fog ? '?' : 'C' );
            if(!go){
                if(search_fog){
                    search_fog = false;
                    goto again;
                }
                get_out = true;
                goto again;
            }
        }
        cout << go << endl;
    }
}
