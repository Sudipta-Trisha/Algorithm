
// Problem: A. C+=
// Contest: Codeforces - Codeforces Global Round 8
// URL: https://codeforces.com/problemset/problem/1368/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
	ll test;
	cin >> test;
	
	while(test--){
		ll a,b,n;
		cin >> a >> b >> n;
		
		ll sum = 0, cnt = 0;
		
		while(sum <= n){
			if(a <= b){
				a+=b;
				sum = a;
				cnt++;
			}
			
			else{
				b+=a;
				sum = b;
				cnt++;
			}
			
			if( sum > n){
				break;
			}
		}
		cout << cnt << endl;
	}
}
