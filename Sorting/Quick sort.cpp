#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int pivot, int high)
{
    int x = arr[high];
    int i=pivot-1, j=high;
    for(j=pivot; j<=high-1; j++){
        if(arr[j]<=x)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quickSort(int arr[],int pivot,int high)
{
    if(pivot<high){
        int q = partition(arr,pivot,high);
        quickSort(arr,pivot,q-1);
        quickSort(arr,q+1,high);
    }
}
void printarray(int n,int arr[])
{
    cout<<"Sorted array is: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int pivot=0, high=n-1;
    quickSort(arr,pivot,high);
    printarray(n,arr);
    return 0;
}
