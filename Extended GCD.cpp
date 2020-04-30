//Extended GCD//

#include<bits/stdc++.h>
#define  ll long long int
using namespace std;

ll egcd(ll a, ll b, ll& x, ll& y) // here &x, &y stands for call by reference which means, if the value of x y change inside of egcd function , then the value of x & y also change inside of main function// 
{
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll g = egcd(b,a%b,x1,y1);

    x = y1;
    y = x1 - y1*(a/b);

    return g;
}

int main()
{
    ll a,b,x,y;
    cin>>a>>b;
    ll ans = egcd(a,b,x,y);
    cout<<ans<<endl;
    return 0;
}
