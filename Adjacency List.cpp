#include<bits/stdc++.h>
using namespace std;
const int nax=500;

vector<vector<int> > graph(nax , vector<int>()); 


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
    // printing adjacency list
    cout<<"Printing adjacency list below: "<<endl;
    for(int i=1; i<=node; i++){
        cout<<i<<"--> ";
        for(int j=0; j<graph[i].size(); j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
