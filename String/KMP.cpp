#include<bits/stdc++.h>
using namespace std;

vector<int>checklps(string pattern)
{
	vector<int>lps(pattern.length());
	
	int index = 0;
	
	for(int i=1; i<pattern.length(); ){
		if(pattern[index] == pattern[i]){
	            lps[i] = index+1;
	            index++, i++;
	    }
	    else {
	        if(index !=0 ) index = lps[index-1];
	        else {
	            lps[i] = index;
	            i++;   
	        }
	    }
	}
	
	return lps;
}

void kmp(string text, string pattern)
{
	vector<int>lps = checklps(pattern);
	bool flag = false;
	
	int i=0, j=0;  // i--> text, j--> pattern
	while(i < text.length()) {
		if(text[i] == pattern[j]) {
			i++, j++;
		}
		else{
			if(j != 0) j = lps[j-1];
			else i++;
		}
		
		if(j == pattern.length()) {
			cout << "Found at index " << (i - pattern.length()) << endl;
			flag = true;
			j == lps[j-1];
		}
	}
	
	if(flag == false) cout << "Not Found" << endl;
}

int main()
{
    string text , pattern;
    getline(cin, text);
    getline(cin, pattern);
    
    kmp(text, pattern);
}
