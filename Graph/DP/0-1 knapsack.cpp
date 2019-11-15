#include<bits/stdc++.h>
using namespace std;

int knapsack(int n, int capacity, int profit[], int weight[])
{
	int mat[n+1][capacity+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=capacity; j++){
			if(i==0 || j==0){
				mat[i][j] = 0;
			}
			else if(weight[i-1]<=j){
				mat[i][j] = max(profit[i-1] + mat[i-1][j-weight[i-1]], mat[i-1][j]);
			}
			else{
				mat[i][j] = mat[i-1][j];
			}
		}
	}
	return mat[n][capacity];

}

int main()
{
	int n,capacity;
	cout<<"Enter the number of objects and capacity: ";
	cin>>n>>capacity;

	int profit[30],weight[30];
	cout<<"Enter Profit: ";
	for(int i=0; i<n; i++){
		cin>>profit[i];
	}
	cout<<"Enter Weights: ";
	for(int i=0; i<n; i++){
		cin>>weight[i];
	}

	cout<<"Total Profit: "<<knapsack(n,capacity,profit,weight);
	return 0;
}

