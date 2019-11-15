#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n,int arr[])
{
    for(int i=0; i<n; i++){
        int j = i;
        for(int k=i+1; k<n; k++){
            if(arr[k]<arr[j])
               j = k;
        }
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cout<<"Enter Range: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(n,arr);
    cout<<"Sorting elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

