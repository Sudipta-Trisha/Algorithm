#include<bits/stdc++.h>
using namespace std;

void b_search(int n,int arr[],int key)
{
    int low = 0, high = n-1;
    while(high>=low){
        int mid = (low+high)/2;
        if(arr[mid]<key)
            low = mid+1;
        else if(arr[mid]==key){
            cout<<"Value is found\n";
            break;
        }
        else
            high = mid-1;
    }
    if(high<low){
        cout<<"Value is not found\n";
    }
}

int main()
{
    int n;
    cout<<"Enter Range: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to search for: ";
    cin>>key;

    b_search(n,arr,key);
    return 0;
}

