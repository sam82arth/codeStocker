#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int n,a,i,min1=2147483647,min2=2147483647;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	             cin>>a;
	            if(a<min1)
	            {
	                 min2=min1;
	                min1=a;
	               
	            }
	            else
	            if(min2>a)
	           {
	               min2=a;
	           }
	        
	    }
	   
	    
	    cout<<min1+min2<<endl;
	    
	}
	return 0;
}
