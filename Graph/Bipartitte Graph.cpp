/* A graph called be Bipartite if -
 * 
 *    1) it has even cycle
 *    2) vertices can be divided into two disjoint sets where every edge connects two vertices from different sets ( not from same set ).
   N.B. : Both connected and disconnected graph represent itself Bipartite.
 * Here I used BFS algotihm to detect given graph is Bipartite or not.
*/

#include<bits/stdc++.h>
using namespace std;
#define nax 500

vector<vector< int> > graph(nax,vector<int>());
int color[nax];

bool bipartite(int node, int src)
{
    bool vis[nax] = {};
    color[src] = 0;
    vis[src] = true;
    
    queue<int>q;
    q.push(src);
    
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
    
        for(int i=0; i<graph[x].size(); i++){
            int y = graph[x][i];
            if(vis[graph[x][i]] == false){
                color[y] = 1 + color[x];
                vis[y] = true;
                q.push(y);
            }
            else if(color[y] == color[x]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int node,edge;
    cout << "Enter node number and edge number: ";
    cin >> node >> edge;
    
    for(int i=0; i<edge; i++){
        int u,v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int source;
    cout << "Enter Source: ";
    cin >> source;
        
    if(bipartite(node,source))
        cout << "YES " << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}
    
        
        
        
    
    
    
    
    
    

