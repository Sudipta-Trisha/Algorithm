#include<bits/stdc++.h>
using namespace std;

void tower(int n,char sou,char aux,char des)
{
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<sou<<" to "<<des<<endl;
        return ;
    }
    tower(n-1,sou,des,aux);
     cout<<"Move disk "<<n<<" from "<<sou<<" to "<<des<<endl;
     tower(n-1,aux,sou,des);
}

int main()
{
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;

    tower(n,'A','B','C');
    return 0;
}
