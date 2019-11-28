//Extended GCD
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

int main()
{
    int a,b,x,y;
    cin>>a>>b;
    int ans = egcd(a,b,&x,&y);
    cout<<ans<<endl;
    return 0;
}
