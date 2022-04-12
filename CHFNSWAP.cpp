#include <iostream>
#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;

long long combination(long long n) {
    return (n * (n - 1)) / 2;
}


int main() {
    boost;
	long long int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int n,count=0,c=0,z;
	    long long i;
	    cin>>n;
	   if(((n*(n+1))/2)&1)
	   {
	       cout<<"0\n";
	       continue;
	   }
	   else
	   {
	    i=(((-2.0) + (sqrt(4.0 + 8 * (n * n + n)))) / 4.0);
	    count+=n-i;
	 
	    if(2*((i*i)+i)==(n*n+n))
	    {
	        count=count+ combination(i)+combination(n-i);
	    }
	  
	    cout<<count<<endl;
	   }
	   
	    
	}
	return 0;
}
