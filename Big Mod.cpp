#include<bits/stdc++.h>
using namespace std;

int bigmod(int B, int P,int M)
{
	if(P==0)
		return 1;
	if(P%2==0)
		return ((bigmod(B,P/2,M)%M) * (bigmod(B,P/2,M)%M)) % M;
	else
		return ((B%M) * (bigmod(B,P-1,M)%M))%M;

}

int main()
{
	int B,P,M;
	while(cin>>B>>P>>M){
	cout<<bigmod(B,P,M)<<endl;
	}

	return 0;
}
