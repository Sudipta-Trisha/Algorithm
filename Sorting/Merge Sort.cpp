#include<bits/stdc++.h>
using namespace std;
int arr[100];

void Merge(int low, int mid, int high)
{
    int i,j,k;
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++){
        L[i] = arr[low + i];
    }
    for(int j=0; j<n2; j++){
        R[j] = arr[mid+1+j];
    }
    i=0, j=0, k=low;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
     while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int low, int high)
{
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        Merge(low,mid,high);
    }
}

void print_array(int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter unsorted array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(0,n-1);
    cout<<"Sorted array isN: ";
    print_array(n);
    return 0;
}

