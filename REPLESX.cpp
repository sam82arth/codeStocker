#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,p,k,i,count=1;
	    long long int x,a[100000];
	    cin>>n>>x>>p>>k;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    
	   if(a[p-1]==x)
	    {
	    cout<<"0\n";
	    continue;
	    }
	    
	    if((a[p-1]<x&&k>p)||(a[p-1]>x&&k<p))
	    {
	        cout<<"-1\n";
	    }
	    
	        if(a[p-1]<x&&k<=p)
	        {
	         for(i=p;i<n;i++)
	         {
	              if(x>a[i])
	              count++;
	             
	         }
	      
	         cout<<count<<endl;
	        }
	         if(a[p-1]>x&&k>=p)
	        {
	            
	         for(i=0;i<p-1;i++)
	         {
	             if(x<a[i])
	              count++;
	              
	            
	         }
	            
	         cout<<count<<endl;
	         
	        }
	        
	}
	    
	return 0;
}

