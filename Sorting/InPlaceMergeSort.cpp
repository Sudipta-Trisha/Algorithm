#include <bits/stdc++.h>
using namespace std;

void inPlaceMerge(int arr[], int s, int mid, int e)
{
    int len = (e-s)+1;

    //gap is a interval where gap is the distance between two elements. 
    //we compare them and if left element is greater than right then swap them. 
    //The process will continue until gap = 1;

    int gap = ceil(len/2);

    while (gap >= 1)
    {
        int index = s;
        while(index + gap <= e) {
            if(arr[index] > arr[index+gap])
                swap(arr[index], arr[index+gap]);
            index++;
        }

        if(gap == 1) {
            break;
        }

        gap /= 2;
    }
}

void inPlaceMergeSort(int arr[], int s, int e)
{
    if (s == e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // left part
    inPlaceMergeSort(arr, s, mid);

    // right part
    inPlaceMergeSort(arr, mid + 1, e);

    // merge two arrays
    inPlaceMerge(arr, s, mid, e);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    inPlaceMergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//Space complexity = O(1)
//Time complexity = O((log2n)^2)
