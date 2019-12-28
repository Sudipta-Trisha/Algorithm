#include<bits/stdc++.h>
using namespace std;
const int nax=500;
vector<vector<int> > graph(nax , vector<int>()); 

void dfs(int node, int source)
{
    stack<int>q;
    q.push(source) ;
    
    bool arr[nax] = {};
    cout<<"Printing traversed path: "<<endl;
    arr[source] = true;
    while(!q.empty()){
        int x = q.top();
        cout<<x<<" ";
        q.pop();
        
        for(int i=0; i<graph[x].size(); i++){
            if(arr[graph[x][i]]==false){
                q.push(graph[x][i]);
                arr[graph[x][i]] = true;
            }
        }
        
    }
    
}

int main()
{
    int node,edge;
    cout<<"Enter node and edge: ";
    cin>>node>>edge;
    
    for(int i=0; i<edge; i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int source;
    cout<<"Enter the starting node: ";
    cin>>source;
    
    dfs(node,source);
    
}
