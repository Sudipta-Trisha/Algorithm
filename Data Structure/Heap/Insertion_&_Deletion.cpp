#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class heap{
    public:
     int arr[100];
     int size;
    
    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){

        size++;
        int index = size;
        arr[index] = val;

        while(index > 1) {
            int par = index/2;

            if(arr[par] < arr[index]) {
                swap(arr[par] , arr[index]);
            }

            else {
                return ;
            }
        }
    }

    void deletion() {

        if(size == 0) {
            cout << "Nothing to delete"<< endl;
            return;
        }

        // step-1: replace last node to root node
        arr[1] = arr[size];

        //step-2: remove the last node;
        size--;

        //step-3: propagate root node to its correct node

        int i=1;
        while( i < size) {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            int largest;

            if(leftIndex < size && arr[i] < arr[leftIndex]) {
                swap(arr[i] , arr[leftIndex]);
                largest = leftIndex;
            }

            if(rightIndex < size && arr[i] < arr[rightIndex]) {
                swap(arr[i] , arr[rightIndex]);
                largest = rightIndex;
            }

            else {
                return ;
            }

            i = largest;
        }
    }

    void print(){

        for(int i=1; i<=size; i++) {
            cout << arr[i] << " ";
        }cout << endl;

    }
};

int main()
{  
  heap hp; 

  int size;
  cout << "Enter size: ";
  cin >> size;

  cout << "Enter values: ";

  while(size>0){
    int i;
    cin>>i;
    hp.insert(i);
    size--;
  }

  hp.print();

  hp.deletion();

  hp.print();
  return 0;
}
