/*Also known as All Pair Shortest Path.It's a dynamaic programming (DP) based algorithm. */

#include<bits/stdc++.h>
using namespace std;

void solve(int cost[][3])
{
   //int cost[node][node] ;
   for(int k=0; k<3; k++){
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(cost[i][k]*cost[k][j]!=0 && i!=j){
                if(cost[i][k]+cost[k][j]<cost[i][j] || cost[i][j]==0){
                    cost[i][j] = cost[i][k] + cost[k][j];
                }
            }
        }
     }
   }
   cout<<"Minimum cost: "<<endl;
   for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<cost[i][j]<<" ";
    }
    cout<<endl;
   }
}

int main()
{
    int cost[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>cost[i][j];
        }
    }
    solve(cost);
    return 0;
}
