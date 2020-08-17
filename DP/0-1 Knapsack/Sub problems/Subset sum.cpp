/*
   n = 5;
   arr[] = 2 ,3 , 7, 8, 10
   sum = 11;
*/


#include<bits/stdc++.h>
using namespace std;

bool subset(int n, int arr[], int sum)
{
    bool dp[n+1][sum+1];
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            dp[i][0] = true;    
            if(j > 0) dp[0][j] = false;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            if(arr[i-1] <= j){
                dp[i][j] = (dp[i][j-arr[i-1]]) || (dp[i-1][j]);
            }
            else 
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][sum];
}

int main()
{
    int n;
    cin >> n;

    int arr[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum;
    cin >> sum;
    
    if(subset(n,arr,sum) == true){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}
