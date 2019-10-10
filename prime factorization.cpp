#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void factorization(ll num)
{
	while(num%2==0){
		cout<<"2"<<" ";
		num/=2;
	}

	for(ll i=3; i<=sqrt(num); i+=2){
		if(num==1)
			break;
		while(num%i==0){
			cout<<i<<" ";
			num /= i;
		}
	}

	if(num>2)
		cout<<num<<endl;
}

int main()
{
	ll num;
	cout<<"Enter a positive number: ";
	cin>>num;

	factorization(num);
	return 0;
}
