/* Time Complexity --> O(n^2) */

#include<bits/stdc++.h>
using namespace std;

void lis(vector<int>& v)
{
    vector<vector<int> >l(v.size());
    
    l[0].push_back(v[0]);
    
    for(int i=1; i<v.size(); i++){
        for(int j=0; j<i; j++){
            if((vi[j] < v[i]) && (l[i].size() < l[j].size() + 1)){
                l[i] = l[j];
            }
        }
        l[i].push_back(v[i]);
    }
   // cout <<"l[0]" << l[0] << endl;
    vector<int>maxx = l[0];
    
    for(vector<int>x : l){
        if(x.size() > maxx.size())
            maxx = x;
    }
    
    cout <<"Maximum Size : " << maxx.size() << endl;
    cout << "Longest Increasing Subsequence: ";
    for(int x: maxx){
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int>v(n+1);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    lis(v);
    
    return 0;
}
