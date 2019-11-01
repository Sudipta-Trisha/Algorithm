 #include<bits/stdc++.h>
#define ll long long int
using namespace std;

bitset<100000000>b;
vector<ll>primes;

void sieve(long long upper_bound)
{
    b.set();
    b[0] = b[1] = 0;
    primes.push_back(2);
    
    for(ll i=3; i<=upper_bound+1; i+=2){
        if(b[i]){
            for(ll j=i*i; j<=upper_bound+1; j+=i){
                b[j] = 0;
            }
            primes.push_back(i);
        }
    }
    
    for(ll i=0; i<primes.size(); i++){
        cout<<primes[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    sieve(10000000);
    return 0;
}


