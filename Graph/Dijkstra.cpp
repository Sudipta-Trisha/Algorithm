/*Dijkstra -- Single Source Shortest Path*/

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
const int INF = 1000000000;
#define nax 100000

vector<vector<int> >graph(nax,vector<int>());
vector<vector<int> >cost(nax,vector<int>());
vector<int>dis(nax,INF);

void dijkstra(int n,int src)
{
    
    dis[src] = 0;
    
    priority_queue<p> q;
    q.push({src,0});
    
    while(!q.empty()){
        int s = q.top().first;
        int d = q.top().second;
        
        q.pop();
        
        for(int i=0; i<graph[s].size(); i++){
            int node = graph[s][i];
            
            if(dis[s] + cost[s][i] < dis[node]){
                dis[node] = dis[s] + cost[s][i];
                q.push({node,dis[node]});
            }
        }
        
        
    }
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    for(int i=0; i<m; i++){
        int u,v,c;
        cin>>u>>v>>c;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
        
        cost[u].push_back(c);
        cost[v].push_back(c);
    }
    
    int source;
    cin>>source;
    
    dijkstra(n,source);
    
    for(int i=1; i<=n; i++)
        cout<<source<<" --> "<<i<<" = "<<dis[i]<<endl;
    
    return 0;
}
