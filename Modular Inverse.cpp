#include<bits/stdc++.h>
using namespace std;

int egcd(int a, int b, int *x, int *y)
{
    if(a==0){
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = egcd(b%a,a,&x1,&y1);
    
    *x = y1 - (b/a)*x1;
    *y = x1;
    
    return gcd;
}

void modInverse(int a, int b)
{
    int x,y;
    int g = egcd(a,b,&x,&y);
    if(g!=1) cout<<"Inverse is not found"<<endl;
    else{
        int ans = ((x%b) + b)%b;
        cout<<"Modular Inverse is "<<ans<<endl;
    }
}

int main()
{
    int a,b,x,y;
    cin>>a>>b;
    modInverse(a,b);
    return 0;
}
