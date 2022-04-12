#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    float a,b;
	    cin>>a>>b;
	    if((a+b)>=6.0)
	    {
	       cout<<"0\n";
	       continue;
	    }
	    else{
	         float temp = (6-a-b)/6;
	           std::cout << std::setprecision(7) << std::fixed << temp <<endl;
	    }
	}
	return 0;
}
