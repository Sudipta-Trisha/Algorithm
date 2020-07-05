/*Sudipta Banik Trisha*/

/*This algorithm is also known as All Pair Shortest Path algorithm. It's based on Dynamic Programming(DP). */

#include<bits/stdc++.h>
using namespace std;
#define sz 100

void apsp()
{
    int node;
    cin >> node;
    
    int cost[node][node];
    
    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            cin >> cost[i][j];
        }
    }
    
    int dis[node][node];
    
    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            dis[i][j] = cost[i][j];
        }
    }
    
    for(int k=0; k<node; k++){
        for(int j=0; j<node; j++){
            for(int i=0; i<node; i++){
                if(dis[j][i] > dis[j][k] + dis[k][i]){
                    dis[j][i] = dis[j][k] + dis[k][i];
                }
            }
        }
    }
    
    cout << "The shortest path matrix: " << endl;
    
    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            if( dis[i][j] == 999)    // here i have used infinity value as 999
                cout << "INF" << " ";
            else 
                cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
}

int main()
{
    apsp();
    
    return 0;
}
    
    

