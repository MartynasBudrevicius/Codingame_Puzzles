//https://www.codingame.com/training/medium/death-first-search-episode-1
#include <bits/stdc++.h>

using namespace std;

int main(){
    int node_count, link_count, exit_count, n1, n2;
    cin >> node_count >> link_count >> exit_count;
    vector<int>* linked_nodes = new vector<int>[node_count];
    for(int i = 0; i < link_count; i++){
        cin >> n1 >> n2;
        linked_nodes[n1].push_back(n2);
        linked_nodes[n2].push_back(n1);
    }
    int* exit_nodes = new int[exit_count];
    for (int i = 0; i < exit_count; i++)
        cin >> exit_nodes[i];
    while (1){
        int agent_node, to_node;
        cin >> agent_node; cin.ignore();
        for(int i = 0; i < linked_nodes[agent_node].size(); i++){    
            to_node = linked_nodes[agent_node][i];
            if (any_of(&exit_nodes[0], &exit_nodes[exit_count], [to_node](int exit_node) {return exit_node == to_node;}))            
                break;
        }        
        cout << agent_node << ' ' << to_node << endl;
    }
}
