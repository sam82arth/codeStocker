#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,k,i,a[100005]={0},r=0,x,j=0;
	    cin>>n>>k;
	    for(i=0;i<n;i++)    
	   {
	       cin>>x;
	       if(x>0)
	        r+=x;
	       else
	        a[j++]=x;
	   }
	   sort(a,a+j);
	   i=0;
	  while(k--&&i<j)
	  {
	      r=r+(a[i]*(-1));
	      i++;
	  }
	  cout<<r<<endl;
	        
	  
	   
	}
	return 0;
}
