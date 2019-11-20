#include<bits/stdc++.h>
using namespace std;
string sum(string s1, string s2)
{
	if(s1.length()>s2.length())
	{
		swap(s1,s2);
	}
	string s3 = "";
    //calculate legth of both string
    
    int n1 = s1.length();
    int n2 = s2.length();
    
    //reverse both string
    
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    
    //calculate the sum
    int carry=0;
    for(int i=0; i<n1; i++)
    {
		int sum1 = (s1[i] - '0') + (s2[i] - '0') + carry;
		s3.push_back(sum1%10 + '0');
		carry = sum1/10;
	}
	//add remaining digit
	for(int i=n1; i<n2; i++)
	{
		int sum1 = (s2[i] - '0') + carry;
		s3.push_back(sum1%10 + '0');
		carry = sum1/10;
	}
	//add carry
	if(carry)
	{
		s3.push_back(carry + '0');
	}
	//reverse resultant string
	reverse(s3.begin(),s3.end());
	return s3;
}
int main()
{
	string s1,s2;
	cout<<"Enter First String: ";
	cin>>s1;
	cout<<"Enter Second String: ";
	cin>>s2;
	
	cout<<sum(s1,s2);
	return 0;
}
	
    
    

