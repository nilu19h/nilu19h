/*
  Graph traversal

  - depth-first search (DFS)
  - breadth-first search (BFS)

  both algorithms are given a starting node.
  they visit all nodes that can be reached
  from them. the difference in the algorithms
  is the order in which they visit the nodes

  - Depth-First Search
    
*/
#include <iostream>
#include <vector>
/*
const int nax = 10;
vector<int> edges[nax];
bool vis[n];

void dfs(int a) {
    if(vis[a]) {
        return;
    }
    vis[a] = true;
    for(int b : edges[a]) {
        dfs(b);
    }
}
*/

void dfs(int a, int par) {
    for(int b : edges[a]) {
        if(a != par) {
            dfs(b);
        }
    }
}

int main() {
    dfs(0, -1);
}

