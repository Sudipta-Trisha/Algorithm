#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int n,int arr[])
{
    for(int i=0; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 and arr[j]<key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cout<<"Enter Range: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insertion_sort(n,arr);
    cout<<"Sorted Elements are: ";
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
