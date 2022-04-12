#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long long int n,a[1000004]={0},i,j,c=1,count=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	  sort(a,a+n);
	  for(i=0;i<n;i++)
	  {
	      if(a[i]==a[i+1])
	      c++;
	      else
	      {
	          count = count + (c*(n-c));
	          c=1;
	      }
	  }
	  cout<<count<<endl;
	 
	}
	return 0;
}
