#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    string s;
	    cin>>s;
	    reverse(s.begin(),s.end());
	    s.erase(0, s.find_first_not_of('0'));
	    cout<<s<<endl;
	}
	return 0;
}
