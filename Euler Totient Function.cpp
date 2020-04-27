//***To find the totient function of any number***

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll phi_func(ll n)
{
    vector<ll>phi(n+10);

    phi[0] = 0;
    phi[1] = 1;

    for(ll i=2; i<=n; i++){
        phi[i] = i;
    }

    for(ll i=2; i<=n; i++){
        if(phi[i]==i){
            for(ll j=i; j<=n; j+=i){
                phi[j] = phi[j] - (phi[j]/i);
            }
        }
    }
    return phi[n];
}

int main()
{
    ll n;
    cin>>n;

    ll ans = phi_func(n);
    cout<<ans<<endl;
    return 0;
}
