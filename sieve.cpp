#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void sieve()
{
    ll n;
    //cout<<"Enter Range: ";
    cin>>n;
    bool arr[100000+30] = {};
    
    for(int i=2; i<=sqrt(n); i++){
		if(arr[i]==0)
        for(int j=i; i*j<=n; j++)
        {
            if(arr[i*j]==0)
                arr[i*j] = 1;
                
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
}
int main()
{
    sieve();
    return 0;
}
