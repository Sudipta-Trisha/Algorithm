#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int p=31;
ll mod = 1e9+7;
const int N = 1e5+10;
vector<ll>powers(N);

int main()
{
    string str1;
    cin >> str1;

    string str2;
    cin >> str2;

    powers[0] = 1;
    for(ll i=1; i<N; i++) {
        powers[i] = (p*powers[i-1]) % mod;
    }

    ll sz1 = str1.length(), sz2 = str2.length();

    vector<ll>hash(sz1+1,0);
    for(ll i=0; i<sz1; i++) {
        hash[i+1] = (hash[i] + (str1[i]-'a' + 1) * powers[i]) % mod;
    }

    ll hash_str2 = 0;
    for(ll i=0; i<sz2; i++) {
        hash_str2 = (hash_str2 + (str2[i]-'a' + 1) * powers[i]) % mod;
    }

    bool flag = false;
    for(ll i=0; i+sz2-1 < sz1; i++) {
        ll curr_hash = (hash[i+sz2] - hash[sz2] + mod)%mod;
        if(curr_hash == (hash_str2 * powers[i])%mod ){
            flag = true;
            cout << "Found at index " << i << endl;
            return 0;
        }
    }

    if(flag == false) {
            cout << "Not found" << endl;
            return 0;
    }
}
