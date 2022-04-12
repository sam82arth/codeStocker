#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
	    int n,a[100000],count=0,i,j,k,temp;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	   sort(a,a+n);
	  
	   for(k=0;k<n;k++)
	   {
	        i=0;
	         j=n-1;
	         temp=a[k]*2;
	        while(i<j)
	        {
    	        if(temp==a[i]+a[j])
    	       {
    	           count++;
    	           break;
    	       }
    	        if(temp>a[i]+a[j])
    	        i++;
    	        else
    	        j--;
	         }
	   }
	   
	  
	    printf("%d\n",count);
	return 0;
}
