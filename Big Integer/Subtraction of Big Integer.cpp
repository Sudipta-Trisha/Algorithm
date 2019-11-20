#include<bits/stdc++.h>
using namespace std;

string findDiff(string str1,string str2)
{
    int n1 = str1.length(), n2 = str2.length();
    if(n1<n2)
        swap(n1,n2);

    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());

    string str = "";

    int carry = 0;
    for(int i=0; i<n2; i++){
        int sub = (str1[i]-'0')-(str2[i]-'0')-carry;
        if(sub<0){
            sub = sub + 10;
            carry = 1;
        }
        else carry=0;

        str.push_back(sub+'0');
    }
    for(int i = n2; i<n1; i++){
        int sub = (str1[i]-'0')-carry;
        if(sub<0){
            sub = sub + 10;
            carry = 1;
        }
        else carry=0;

        str.push_back(sub+'0');
    }
    reverse(str.begin(),str.end());
    return str;
}

int main()
{
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;

    cout<<findDiff(str1,str2)<<endl;
    return 0;
}
